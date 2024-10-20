
-- VHDL Instantiation Created from source file Controller.vhd -- 13:54:04 03/14/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Controller
	PORT(
		Clock : IN std_logic;
		Reset : IN std_logic;
		Done : IN std_logic;
		ST : IN std_logic;          
		Initial : OUT std_logic;
		ldA : OUT std_logic;
		ldB : OUT std_logic;
		ldrslt : OUT std_logic;
		Start : OUT std_logic
		);
	END COMPONENT;

	Inst_Controller: Controller PORT MAP(
		Clock => ,
		Reset => ,
		Done => ,
		ST => ,
		Initial => ,
		ldA => ,
		ldB => ,
		ldrslt => ,
		Start => 
	);


