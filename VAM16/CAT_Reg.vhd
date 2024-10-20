library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity CAT_Reg is

	PORT
	(
		Clock		:	IN		STD_LOGIC;
		Reset		:	IN		STD_LOGIC;
		load		:	IN		STD_LOGIC;
		Input16	:	IN		unsigned(15 DOWNTO 0);
		Input05	:	IN		unsigned(04 DOWNTO 0);
		Output32	:	OUT	unsigned(31 DOWNTO 0)
	);

end CAT_Reg;

architecture Behavioral of CAT_Reg is

	Signal Input16_Int	:	unsigned(15 DOWNTO 0)	:=	(others=>'0');
	Signal Input05_Int	:	unsigned(04 DOWNTO 0)	:=	(others=>'0');
	Signal Output32_Int	:	unsigned(31 DOWNTO 0)	:=	(others=>'0');

begin

	Output32	<=	Output32_Int;


	process(Clock)
	begin
	
		if rising_edge(Clock) then
			input16_Int	<=	input16;
			input05_Int	<=	input05;
			if(input05(4) = '1') then
				input05_Int	<=	to_unsigned(16, 5);
			end if;
			if (load = '1') then
				Output32_Int((31-to_integer(input05_Int)) DOWNTO (16-to_integer(input05_Int))) <= input16_Int;
			end if;
			if (Reset = '1') then
				Output32_Int	<=	(others=>'0');
			end if;
		end if;

	end process;

end Behavioral;

