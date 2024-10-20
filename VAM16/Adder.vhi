
-- VHDL Instantiation Created from source file Adder.vhd -- 15:33:12 03/15/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Adder
	PORT(
		InputA : IN std_logic_vector(3 downto 0);
		InputB : IN std_logic_vector(3 downto 0);          
		Cout : OUT std_logic;
		Output : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_Adder: Adder PORT MAP(
		Cout => ,
		InputA => ,
		InputB => ,
		Output => 
	);


