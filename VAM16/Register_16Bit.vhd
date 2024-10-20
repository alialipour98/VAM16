library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Reg is

	GENERIC
	(
		busWidth	:	INTEGER	:=	16
	);

	PORT
	(
		Clock		:	IN		STD_LOGIC;
		Reset		:	IN		STD_LOGIC;
		load		:	IN		STD_LOGIC;
		inBus		:	IN		unsigned(busWidth-1 DOWNTO 0);
		outBus	:	OUT	unsigned(busWidth-1 DOWNTO 0)
	);

end Reg;

architecture Behavioral of Reg is

	Signal inBus_Int	:	unsigned(busWidth-1 DOWNTO 0)	:=	(others=>'0');
	Signal outBus_Int	:	unsigned(busWidth-1 DOWNTO 0)	:=	(others=>'0');

begin

	outBus	<=	outBus_Int;

	process(Clock)
	begin
	
		if rising_edge(Clock) then
		
			inBus_Int	<=	inBus;
			
			if (load = '1') then
				outBus_Int	<=	inBus_Int;
			end if;
			
			if (Reset = '1') then
				outBus_Int	<=	(others=>'0');
			end if;

		end if;
	
	end process;

end Behavioral;

