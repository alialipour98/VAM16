LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY MUX_8Bit_2_to_1_tb IS
END MUX_8Bit_2_to_1_tb;
 
ARCHITECTURE behavior OF MUX_8Bit_2_to_1_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MUX_8Bit_2_to_1
    PORT(
         SEL1 		: IN  	std_logic;
         SEL2 		: IN  	std_logic;
         INPUT1 	: IN  	unsigned(7 downto 0);
         INPUT2 	: IN  	unsigned(7 downto 0);
         OUTPUT 	: OUT  	unsigned(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal SEL1 	: std_logic := '0';
   signal SEL2 	: std_logic := '0';
   signal INPUT1 	: unsigned(7 downto 0) := (others => '0');
   signal INPUT2 	: unsigned(7 downto 0) := (others => '0');

 	--Outputs
   signal OUTPUT : unsigned(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MUX_8Bit_2_to_1 PORT MAP (
          SEL1 	=> SEL1,
          SEL2 	=> SEL2,
          INPUT1 	=> INPUT1,
          INPUT2 	=> INPUT2,
          OUTPUT 	=> OUTPUT
        ); 

   -- Stimulus process
   stim_proc: process
   begin		
      -- insert stimulus here 

		INPUT1	<=	to_unsigned(12, 8);
		INPUT2	<=	to_unsigned( 5, 8);

		SEL1		<=	'1';
		SEL2		<=	'0';

		WAIT FOR 100 NS;
		
		SEL1		<=	'0';
		SEL2		<=	'1';

		WAIT FOR 100 NS;

		SEL1		<=	'1';
		SEL2		<=	'1';
		
      wait;
   end process;

END;
