library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity MUX_8Bit_2_to_1 is

	PORT
	(
		SEL1		:	IN		STD_LOGIC;
		SEL2		:	IN		STD_LOGIC;
		INPUT1	:	IN		unsigned(7 DOWNTO 0);
		INPUT2	:	IN		unsigned(7 DOWNTO 0);
		OUTPUT	:	OUT	unsigned(7 DOWNTO 0)
	);

end MUX_8Bit_2_to_1;

architecture Behavioral of MUX_8Bit_2_to_1 is

	Signal selection	:	unsigned(1 DOWNTO 0);

begin

	selection	<=	(SEL2 & SEL1);
	
	WITH selection SELECT
	OUTPUT	<=	(INPUT1) 		WHEN "01",
					(INPUT2) 		WHEN "10",
					(others=>'0')	when OTHERS;

end Behavioral;

