LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY DataPath_tb IS
END DataPath_tb;
 
ARCHITECTURE behavior OF DataPath_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DataPath
    PORT(
         Clock 	: IN  	std_logic;
         Reset 	: IN  	std_logic;
         ldA 		: IN  	std_logic;
         ldB 		: IN  	std_logic;
         ldrslt 	: IN  	std_logic;
         Start 	: IN  	std_logic;
         Done 		: OUT  	std_logic;
         ABus 		: IN  	unsigned(15 downto 0);
         BBus 		: IN  	unsigned(15 downto 0);
         oBus 		: OUT  	unsigned(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clock 	: std_logic := '0';
   signal Reset 	: std_logic := '0';
   signal ldA 		: std_logic := '0';
   signal ldB 		: std_logic := '0';
   signal ldrslt 	: std_logic := '0';
   signal Start 	: std_logic := '0';
   signal ABus 	: unsigned(15 downto 0) := (others => '0');
   signal BBus 	: unsigned(15 downto 0) := (others => '0');

 	--Outputs
   signal oBus 	: unsigned(31 downto 0);
   signal Done 	: std_logic := '0';

   -- Clock period definitions
   constant Clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DataPath PORT MAP (
          Clock 	=> Clock,
          Reset 	=> Reset,
          ldA 		=> ldA,
          ldB 		=> ldB,
          ldrslt 	=> ldrslt,
          Start 	=> Start,
          Done 	=> Done,
          ABus 	=> ABus,
          BBus 	=> BBus,
          oBus 	=> oBus
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

		Reset		<=	'1';
      wait for Clock_period;
		Reset		<=	'0';

		ABus		<=	to_unsigned(412, 16);
		BBus		<=	to_unsigned(400, 16);
		wait for Clock_period;

		ldA		<=	'1';
		ldB		<=	'1';
		wait for Clock_period;

		Start 	<=	'1';
		wait for Clock_period*9;
		ldrslt	<=	'1';
		
      wait;
   end process;

END;
