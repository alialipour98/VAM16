
-- VHDL Instantiation Created from source file CAT_Reg.vhd -- 15:36:10 03/15/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT CAT_Reg
	PORT(
		Clock : IN std_logic;
		Reset : IN std_logic;
		load : IN std_logic;
		Input16 : IN std_logic_vector(15 downto 0);
		Input05 : IN std_logic_vector(4 downto 0);          
		Output32 : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_CAT_Reg: CAT_Reg PORT MAP(
		Clock => ,
		Reset => ,
		load => ,
		Input16 => ,
		Input05 => ,
		Output32 => 
	);


