library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Controller is

	PORT
	(
		Clock		:	IN		STD_LOGIC;
		Reset		:	IN		STD_LOGIC;
		Done		:	IN		STD_LOGIC;
		ST			:	IN		STD_LOGIC;
		Initial	:	OUT	STD_LOGIC;
		ldA		:	OUT	STD_LOGIC;
		ldB		:	OUT	STD_LOGIC;
		ldrslt	:	OUT	STD_LOGIC;
		Start		:	OUT	STD_LOGIC
	);

end Controller;

architecture Behavioral of Controller is

	Constant	IDLE		:	unsigned(2 DOWNTO 0)	:=	"000";
	Constant	INIT		:	unsigned(2 DOWNTO 0)	:=	"001";
	Constant	LOAD		:	unsigned(2 DOWNTO 0)	:=	"010";
	Constant	FIND1		:	unsigned(2 DOWNTO 0)	:=	"011";
	Constant	STFIND1	:	unsigned(2 DOWNTO 0)	:=	"100";
	Constant	MUL		:	unsigned(2 DOWNTO 0)	:=	"101";
	Constant	RESULT	:	unsigned(2 DOWNTO 0)	:=	"110";
	Constant	NOP		:	unsigned(2 DOWNTO 0)	:=	"111";

	Signal present_state	:	unsigned(2 DOWNTO 0)	:=	(others=>'0');
	Signal next_state		:	unsigned(2 DOWNTO 0)	:=	(others=>'0');

begin

	process(Clock)
	begin
	
		if rising_edge(Clock) then
			present_state	<=	next_state;
			if (Reset = '1') then
				present_state	<=	IDLE;
			end if;
		end if;
	
	end process;

	process(present_state)
	begin
		Initial	<= '0';
		ldA		<=	'0';
		ldB		<=	'0';
		Start		<=	'0';
		ldrslt	<=	'0';
		case (present_state) is
				
			WHEN INIT	=>
				Initial	<=	'1';
			WHEN LOAD	=>
				ldA		<=	'1';
				ldB		<=	'1';
			WHEN STFIND1	=>
				Start		<=	'1';
			WHEN FIND1	=>
				Start		<=	'0';
			WHEN RESULT	=>
				ldrslt	<=	'1';
			WHEN OTHERS	=>
				NULL;
		end case;
	end process;

	process(present_state, ST, Done, Reset)
	begin
	
		case (present_state) is
		
			WHEN IDLE	=>
				if (ST = '1') then
					next_state	<=	INIT;
				else
					next_state	<=	IDLE;
				end if;
			WHEN INIT	=>
				if (ST = '1') then
					next_state	<=	INIT;
				else
					next_state	<=	LOAD;
				end if;
			WHEN LOAD	=>
				next_state		<=	STFIND1;
			WHEN STFIND1	=>
				next_state		<=	FIND1;
			WHEN FIND1	=>
				if (Done = '1') then
					next_state	<=	MUL;
				else
					next_state	<=	FIND1;
				end if;
			WHEN MUL		=>
				next_state		<=	NOP;
			WHEN NOP		=>
				next_state		<=	RESULT;
			WHEN RESULT	=>
				next_state		<=	IDLE;
			WHEN OTHERS	=>
				NULL;
		end case;
	
	end process;

end Behavioral;

