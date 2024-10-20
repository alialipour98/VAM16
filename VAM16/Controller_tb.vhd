LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY Controller_tb IS
END Controller_tb;
 
ARCHITECTURE behavior OF Controller_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Controller
    PORT(
         Clock 	: IN  	std_logic;
         Reset 	: IN  	std_logic;
         Done 		: IN  	std_logic;
         ST 		: IN  	std_logic;
         Initial	: OUT  	std_logic;
         ldA 		: OUT  	std_logic;
         ldB 		: OUT  	std_logic;
         ldrslt 	: OUT  	std_logic;
         Start 	: OUT  	std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Clock 	: std_logic := '0';
   signal Reset 	: std_logic := '0';
   signal Done 	: std_logic := '0';
   signal ST	 	: std_logic := '0';

 	--Outputs
   signal Initial : std_logic;
   signal ldA 		: std_logic;
   signal ldB 		: std_logic;
   signal ldrslt 	: std_logic;
   signal Start 	: std_logic;

   -- Clock period definitions
   constant Clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Controller PORT MAP (
          Clock 	=> Clock,
          Reset 	=> Reset,
          Done 	=> Done,
          ST	 	=> ST,
          Initial => Initial,
          ldA 		=> ldA,
          ldB 		=> ldB,
          ldrslt 	=> ldrslt,
          Start 	=> Start
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
		wait for Clock_period*2;
		Reset	<=	'0';
		
		ST	<=	'1';
		wait for Clock_period*2;
		ST	<=	'0';

		wait for Clock_period*10;
		Done	<=	'1';
		
      wait;
   end process;

END;
