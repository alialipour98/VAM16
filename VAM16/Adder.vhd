library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Adder is

	PORT
	(
		Cout		:	OUT	STD_LOGIC;
		InputA	:	IN		unsigned(3 DOWNTO 0);
		InputB	:	IN		unsigned(3 DOWNTO 0);
		Output	:	OUT	unsigned(3 DOWNTO 0)
	);

end Adder;

architecture Behavioral of Adder is

	Signal Sum	:	unsigned(4 DOWNTO 0)	:=	(others=>'0');

begin

	Sum		<=	resize(InputA, 5) + InputB;
	Output	<=	Sum(3 DOWNTO 0);
	Cout		<=	Sum(4);

end Behavioral;

