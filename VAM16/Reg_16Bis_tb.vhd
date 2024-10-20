LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY Reg_tb IS
END Reg_tb;
 
ARCHITECTURE behavior OF Reg_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Reg
    PORT(
         Clock 	: IN  	std_logic;
         Reset 	: IN  	std_logic;
         load 		: IN  	std_logic;
         inBus 	: IN  	unsigned(15 downto 0);
         outBus 	: OUT  	unsigned(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clock 	: std_logic := '0';
   signal Reset 	: std_logic := '0';
   signal load 	: std_logic := '0';
   signal inBus 	: unsigned(15 downto 0) := (others => '0');

 	--Outputs
   signal outBus 	: unsigned(15 downto 0);

   -- Clock period definitions
   constant Clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Reg PORT MAP (
          Clock 	=> Clock,
          Reset 	=> Reset,
          load 	=> load,
          inBus 	=> inBus,
          outBus 	=> outBus
        );

   -- Clock process definitions
   Clock_process :process
   begin
		Clock <= '0';
		wait for Clock_period/2;
		Clock <= '1';
		wait for Clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for Clock_period*10;

      -- insert stimulus here 

		Reset	<=	'1';
		wait for Clock_period;
		Reset	<=	'0';
		
		inBus	<=	to_unsigned(12, 16);
		wait for Clock_period*10;
		
		load	<=	'1';
		wait for Clock_period;
		load	<=	'0';

      wait;
   end process;

END;
