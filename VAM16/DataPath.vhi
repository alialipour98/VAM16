
-- VHDL Instantiation Created from source file DataPath.vhd -- 13:52:57 03/14/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT DataPath
	PORT(
		Clock : IN std_logic;
		Reset : IN std_logic;
		ldA : IN std_logic;
		ldB : IN std_logic;
		ldrslt : IN std_logic;
		Start : IN std_logic;
		ABus : IN std_logic_vector(15 downto 0);
		BBus : IN std_logic_vector(15 downto 0);          
		Done : OUT std_logic;
		oBus : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_DataPath: DataPath PORT MAP(
		Clock => ,
		Reset => ,
		ldA => ,
		ldB => ,
		ldrslt => ,
		Start => ,
		Done => ,
		ABus => ,
		BBus => ,
		oBus => 
	);


