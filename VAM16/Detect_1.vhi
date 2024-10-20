
-- VHDL Instantiation Created from source file Detect_1.vhd -- 15:15:35 03/15/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Detect_1
	PORT(
		Clock : IN std_logic;
		Reset : IN std_logic;
		Start : IN std_logic;
		input : IN std_logic_vector(15 downto 0);          
		sellower : OUT std_logic;
		selupper : OUT std_logic;
		Done : OUT std_logic;
		Count_OUT : OUT std_logic_vector(3 downto 0);
		output : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_Detect_1: Detect_1 PORT MAP(
		Clock => ,
		Reset => ,
		Start => ,
		sellower => ,
		selupper => ,
		Done => ,
		Count_OUT => ,
		input => ,
		output => 
	);


