library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Detect_1 is

	PORT
	(
		Clock			:	IN		STD_LOGIC;
		Reset			:	IN		STD_LOGIC;
		Start			:	IN		STD_LOGIC;
		sellower		:	OUT	STD_LOGIC;
		selupper		:	OUT	STD_LOGIC;
		Done			:	OUT	STD_LOGIC;
		Count_OUT	:	OUT	unsigned(03 DOWNTO 0);
		input			:	IN		unsigned(15 DOWNTO 0);
		output		:	OUT	unsigned(7  DOWNTO 0)
	);

end Detect_1;

architecture Behavioral of Detect_1 is

	Signal sellower_Int	:	STD_LOGIC					:=	'0';
	Signal selupper_Int	:	STD_LOGIC					:=	'0';
	Signal found			:	STD_LOGIC					:= '0';
	Signal Done_Int		:	STD_LOGIC					:= '0';
	Signal Start_Int		:	STD_LOGIC					:= '0';

	Signal Count			:	unsigned(3  DOWNTO 0)	:=	(others=>'0');
	Signal output_Int		:	unsigned(7  DOWNTO 0)	:=	(others=>'0');

begin

	sellower		<=	sellower_Int;
	selupper		<=	selupper_Int;

	Done			<=	Done_Int;
	
	count_OUT	<=	count - 1;
	
	output		<=	output_Int;
	
	process(Clock)
	begin
		if rising_edge(Clock) then
			
			if (Start = '1') then
				Start_Int		<=	'1';
				Done_Int			<=	'0';
				count				<=	(others=>'0');
				output_Int		<=	(others=>'0');
			end if;

			if (Reset = '1')	then
				found 			<= '0';
				Done_Int			<= '0';
				sellower_Int	<= '0';
				selupper_Int	<= '0';
				Count				<= (others=>'0');
			end if;

			if (found = '1' AND Done_Int = '0') then
				sellower_Int	<=	found;
				selupper_Int	<=	NOT found;
				Done_Int			<=	'1';
				found				<=	'0';
				if (count-1 > 8) then
					output_Int		<=	input(7 DOWNTO 0);
				else
					output_Int		<=	input((16-to_integer(Count)) DOWNTO (16-to_integer(Count)-7));
				end if;
			end if;

			if (found = '0' AND Start_Int = '1') then
				Count				<=	Count + 1;
			end if;

			if (input(15-to_integer(Count)) = '1' AND Start_Int = '1') then
				found				<=	'1';
				Start_Int		<=	'0';
			end if;

		end if;
	end process;

end Behavioral;










