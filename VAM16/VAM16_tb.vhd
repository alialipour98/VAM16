LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY VAM16_tb IS
END VAM16_tb;
 
ARCHITECTURE behavior OF VAM16_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT VAM16
    PORT(
         Clock : IN  	std_logic;
         Reset : IN  	std_logic;
         ST 	: IN  	std_logic;
         ABus 	: IN  	unsigned(15 downto 0);
         BBus 	: IN  	unsigned(15 downto 0);
         oBus 	: OUT  	unsigned(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clock : std_logic := '0';
   signal Reset : std_logic := '0';
   signal ST 	 : std_logic := '0';
   signal ABus  : unsigned(15 downto 0) := (others => '0');
   signal BBus  : unsigned(15 downto 0) := (others => '0');

 	--Outputs
   signal oBus : unsigned(31 downto 0);

   -- Clock period definitions
   constant Clock_period : time := 10 ns;
 
	type mem is array (0 to 11) of unsigned(31 DOWNTO 0);
	Signal MYmem	:	mem	:=	(others=>(others=>'0'));

	Signal ABus_Int	:	unsigned(31 DOWNTO 0)	:=	(others=>'0');
	Signal BBus_Int	:	unsigned(31 DOWNTO 0)	:=	(others=>'0'); 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: VAM16 PORT MAP (
          Clock 	=> Clock,
          Reset 	=> Reset,
          ST 		=> ST,
          ABus 	=> ABus,
          BBus		=> BBus,
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

		---------------------------------
		Reset	<=	'1';
		wait for Clock_period;
		Reset	<=	'0';
		
		ABus		<=	to_unsigned(25, 16);
		BBus		<=	to_unsigned(411, 16);
		wait for Clock_period;

		ST	<=	'1';
		wait for Clock_period;
		ST	<=	'0';

		
		wait for Clock_period*25;
		Mymem(00)	<=	resize(ABus, 32);
		Mymem(01)	<=	resize(BBus, 32);
		Mymem(02)	<=	oBus;
		---------------------------------
		Reset	<=	'1';
		wait for Clock_period;
		Reset	<=	'0';
		
		ABus		<=	to_unsigned(421, 16);
		BBus		<=	to_unsigned(411, 16);
		wait for Clock_period;

		ST	<=	'1';
		wait for Clock_period;
		ST	<=	'0';
		
		wait for Clock_period*25;

		Mymem(03)	<=	resize(ABus, 32);
		Mymem(04)	<=	resize(BBus, 32);
		Mymem(05)	<=	oBus;
		---------------------------------
		Reset	<=	'1';
		wait for Clock_period;
		Reset	<=	'0';
		
		ABus		<=	to_unsigned(35, 16);
		BBus		<=	to_unsigned(45, 16);
		wait for Clock_period;

		ST	<=	'1';
		wait for Clock_period;
		ST	<=	'0';
		
		wait for Clock_period*25;

		Mymem(06)	<=	resize(ABus, 32);
		Mymem(07)	<=	resize(BBus, 32);
		Mymem(08)	<=	oBus;
		---------------------------------
		Reset	<=	'1';
		wait for Clock_period;
		Reset	<=	'0';
		
		ABus		<=	to_unsigned(500, 16);
		BBus		<=	to_unsigned(718, 16);
		wait for Clock_period;

		ST	<=	'1';
		wait for Clock_period;
		ST	<=	'0';
		
		wait for Clock_period*25;

		Mymem(09)	<=	resize(ABus, 32);
		Mymem(10)	<=	resize(BBus, 32);
		Mymem(11)	<=	oBus;
		---------------------------------

      wait;
   end process;

END;
