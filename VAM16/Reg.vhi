
-- VHDL Instantiation Created from source file Reg.vhd -- 11:07:29 03/14/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Reg
	PORT(
		Clock : IN std_logic;
		Reset : IN std_logic;
		load : IN std_logic;
		inBus : IN std_logic_vector(15 downto 0);          
		outBus : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	Inst_Reg: Reg PORT MAP(
		Clock => ,
		Reset => ,
		load => ,
		inBus => ,
		outBus => 
	);


