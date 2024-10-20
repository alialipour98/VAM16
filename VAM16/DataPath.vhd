library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity DataPath is

	PORT
	(
		Clock		:	IN		STD_LOGIC;
		Reset		:	IN		STD_LOGIC;
		ldA		:	IN		STD_LOGIC;
		ldB		:	IN		STD_LOGIC;
		ldrslt	:	IN		STD_LOGIC;
		Start		:	IN		STD_LOGIC;
		Done		:	OUT	STD_LOGIC;
		
		ABus		:	IN		unsigned(15 DOWNTO 0);
		BBus		:	IN		unsigned(15 DOWNTO 0);
		oBus		:	OUT	unsigned(31	DOWNTO 0)
	);

end DataPath;

architecture Behavioral of DataPath is

	Signal sellowerA	:	STD_LOGIC	:=	'0';
	Signal selupperA	:	STD_LOGIC	:=	'0';
	Signal sellowerB	:	STD_LOGIC	:=	'0';
	Signal selupperB	:	STD_LOGIC	:=	'0';
	Signal DoneA		:	STD_LOGIC	:=	'0';
	Signal DoneB		:	STD_LOGIC	:=	'0';

	Signal AReg			:	unsigned(15 DOWNTO 0)	:=	(others=>'0');
	Signal BReg			:	unsigned(15 DOWNTO 0)	:=	(others=>'0');
	
	Signal DetecA_OUT	:	unsigned(07 DOWNTO 0)	:=	(others=>'0');
	Signal DetecB_OUT	:	unsigned(07 DOWNTO 0)	:=	(others=>'0');

	Signal MUL_op		:	unsigned(15 DOWNTO 0)	:=	(others=>'0');
	Signal ADD_op		:	unsigned(04 DOWNTO 0)	:=	(others=>'0');

	Signal rsltReg		:	unsigned(31 DOWNTO 0)	:=	(others=>'0');

	Signal Count_A		:	unsigned(3 DOWNTO 0)		:=	(others=>'0');
	Signal Count_B		:	unsigned(3 DOWNTO 0)		:=	(others=>'0');

begin

	Done							<=	DoneA AND DoneB;

	-----------------------------------------
	Regiter_A: ENTITY WORK.Reg 
	GENERIC MAP
	(
		busWidth	=>	16
	)
	PORT MAP(
		Clock 	=> Clock,
		Reset 	=> Reset,
		load 		=> ldA,
		inBus 	=> ABus,
		outBus 	=> AReg
	);
	-----------------------------------------
	Regiter_B: ENTITY WORK.Reg 
	GENERIC MAP
	(
		busWidth	=>	16
	)
	PORT MAP(
		Clock 	=> Clock,
		Reset 	=> Reset,
		load 		=> ldB,
		inBus 	=> BBus,
		outBus 	=> BReg
	);
	-----------------------------------------
	Detect_A_1: ENTITY WORK.Detect_1 
	PORT MAP(
		Clock 		=> Clock,
		Reset 		=> Reset,
		Start 		=> Start,
		sellower 	=> sellowerA,
		selupper 	=> selupperA,
		Done 			=> DoneA,
		Count_OUT 	=> Count_A,
		input 		=> AReg,
		output 		=> DetecA_OUT
	);
	-----------------------------------------
	Detect_B_1: ENTITY WORK.Detect_1 
	PORT MAP(
		Clock 		=> Clock,
		Reset 		=> Reset,
		Start 		=> Start,
		sellower 	=> sellowerB,
		selupper 	=> selupperB,
		Done 			=> DoneB,
		Count_OUT 	=> Count_B,
		input 		=> BReg,
		output 		=> DetecB_OUT
	);
	-----------------------------------------
	Multiplier_8Bit: ENTITY WORK.Multiplier 
	PORT MAP(
		InputA => DetecA_OUT,
		InputB => DetecB_OUT,
		Output => MUL_op
	);
	-----------------------------------------
	Adder_4Bit: ENTITY WORK.Adder 
	PORT MAP(
		Cout 		=> ADD_op(4),
		InputA 	=> Count_A,
		InputB 	=> Count_B,
		Output 	=> ADD_op(3 DOWNTO 0)
	);
	-----------------------------------------
	Concat_Reg: ENTITY WORK.CAT_Reg PORT MAP(
		Clock 	=> Clock,
		Reset 	=> Reset,
		load 		=> ldrslt,
		Input16 	=> MUL_op,
		Input05 	=> ADD_op,
		Output32 => oBus
	);
	---------------------------------------
end Behavioral;










