LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY Multiplier_tb IS
END Multiplier_tb;
 
ARCHITECTURE behavior OF Multiplier_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Multiplier
    PORT(
         InputA : IN  	unsigned(7 downto 0);
         InputB : IN  	unsigned(7 downto 0);
         Output : OUT  	unsigned(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal InputA : unsigned(7 downto 0) := (others => '0');
   signal InputB : unsigned(7 downto 0) := (others => '0');

 	--Outputs
   signal Output : unsigned(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Multiplier PORT MAP (
          InputA => InputA,
          InputB => InputB,
          Output => Output
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
      -- insert stimulus here 

		InputA	<=	to_unsigned(12, 8);
		InputB	<=	to_unsigned(10, 8);

      wait;
   end process;

END;
