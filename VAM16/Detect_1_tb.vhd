LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY Detect_1_tb IS
END Detect_1_tb;
 
ARCHITECTURE behavior OF Detect_1_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Detect_1
    PORT(
         Clock 		: IN  	std_logic;
         Reset 		: IN  	std_logic;
			Start			: IN		std_logic;
         sellower 	: OUT  	std_logic;
         selupper 	: OUT  	std_logic;
         Done 			: OUT  	std_logic;
         count_OUT 	: OUT  	unsigned(03 downto 0);
         input 		: IN  	unsigned(15 downto 0);
         output 		: OUT  	unsigned(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clock 	: std_logic := '0';
   signal Reset 	: std_logic := '0';
   signal Start 	: std_logic := '0';
   signal input 	: unsigned(15 downto 0) := (others => '0');

 	--Outputs
   signal sellower 	: std_logic;
   signal selupper 	: std_logic;
   signal Done 		: std_logic;
   signal output 		: unsigned(7 downto 0);
   signal count_OUT 	: unsigned(03 downto 0);

   -- Clock period definitions
   constant Clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Detect_1 PORT MAP (
          Clock 		=> Clock,
          Reset 		=> Reset,
          Start 		=> Start,
          Done 		=> Done,
          sellower 	=> sellower,
          selupper 	=> selupper,
          count_OUT 	=> count_OUT,
          input 		=> input,
          output 		=> output
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

		Reset	<= '1';
		wait for Clock_period;
		Reset	<=	'0';

		input	<=	"1000111100001010";
		Start <= '1';
		wait for Clock_period;
		Start <= '0';

		wait for Clock_period*30;

		input	<=	to_unsigned(12, 16);
		Start <= '1';
		wait for Clock_period;
		Start <= '0';

      wait;
   end process;

END;
