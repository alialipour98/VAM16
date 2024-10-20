library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity FA is

	PORT
	(
		A		:	IN		STD_LOGIC;
		B		:	IN		STD_LOGIC;
		Cin	:	IN		STD_LOGIC;
		Cout	:	OUT	STD_LOGIC;
		Sum	:	OUT	STD_LOGIC
	);

end FA;

architecture Behavioral of FA is

begin

	Cout	<=	(A AND B) OR (A AND Cin) OR (B AND Cin);
	Sum	<=	(A XOR B XOR Cin);

end Behavioral;

