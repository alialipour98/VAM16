
-- VHDL Instantiation Created from source file MUX_8Bit_2_to_1.vhd -- 11:25:14 03/14/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT MUX_8Bit_2_to_1
	PORT(
		SEL1 : IN std_logic;
		SEL2 : IN std_logic;
		INPUT1 : IN std_logic_vector(7 downto 0);
		INPUT2 : IN std_logic_vector(7 downto 0);          
		OUTPUT : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_MUX_8Bit_2_to_1: MUX_8Bit_2_to_1 PORT MAP(
		SEL1 => ,
		SEL2 => ,
		INPUT1 => ,
		INPUT2 => ,
		OUTPUT => 
	);


