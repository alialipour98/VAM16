
-- VHDL Instantiation Created from source file Multiplier.vhd -- 15:24:21 03/15/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Multiplier
	PORT(
		InputA : IN std_logic_vector(7 downto 0);
		InputB : IN std_logic_vector(7 downto 0);          
		Output : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	Inst_Multiplier: Multiplier PORT MAP(
		InputA => ,
		InputB => ,
		Output => 
	);


