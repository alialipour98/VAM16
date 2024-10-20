LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY CAT_Reg_tb IS
END CAT_Reg_tb;
 
ARCHITECTURE behavior OF CAT_Reg_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CAT_Reg
    PORT(
         Clock 	: IN  	std_logic;
         Reset 	: IN  	std_logic;
         load 		: IN  	std_logic;
         Input16 	: IN  	unsigned(15 downto 0);
         Input05 	: IN  	unsigned(4 downto 0);
         Output32 : OUT  	unsigned(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clock 	: std_logic := '0';
   signal Reset 	: std_logic := '0';
   signal load 	: std_logic := '0';
   signal Input16 : unsigned(15 downto 0) := (others => '0');
   signal Input05 : unsigned(4 downto 0) := (others => '0');

 	--Outputs
   signal Output32 : unsigned(31 downto 0);

   -- Clock period definitions
   constant Clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CAT_Reg PORT MAP (
          Clock 		=> Clock,
          Reset 		=> Reset,
          load 		=> load,
          Input16 	=> Input16,
          Input05 	=> Input05,
          Output32 	=> Output32
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

		Input16 	<= "0001010000000101";
		Input05	<=	"10010";
		load		<=	'1';
		
      wait;
   end process;

END;
