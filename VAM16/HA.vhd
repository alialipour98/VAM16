library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity HA is

	PORT
	(
		A		:	IN		STD_LOGIC;
		B		:	IN		STD_LOGIC;
		Cout	:	OUT	STD_LOGIC;
		Sum	:	OUT	STD_LOGIC
	);

end HA;

architecture Behavioral of HA is

begin

	Cout	<=	A AND B;
	Sum	<=	A XOR B;

end Behavioral;

