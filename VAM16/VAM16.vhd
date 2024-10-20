library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity VAM16 is

	PORT
	(
		Clock	:	IN		STD_LOGIC;
		Reset	:	IN		STD_LOGIC;
		ST		:	IN		STD_LOGIC;
		ABus	:	IN		unsigned(15	DOWNTO 0);
		BBus	:	IN		unsigned(15	DOWNTO 0);
		oBus	:	OUT	unsigned(31	DOWNTO 0)
	);

end VAM16;

architecture Behavioral of VAM16 is

	Signal Done		:	STD_LOGIC	:=	'0';
	Signal ldA		:	STD_LOGIC	:=	'0';
	Signal ldB		:	STD_LOGIC	:=	'0';
	Signal ldrslt	:	STD_LOGIC	:=	'0';
	Signal Start	:	STD_LOGIC	:=	'0';
	Signal Initial	:	STD_LOGIC	:=	'0';

begin

	DP	: ENTITY WORK.DataPath
	PORT MAP
	(
		Clock 	=> Clock,
		Reset 	=> Initial,
		ldA 		=> ldA,
		ldB 		=> ldB,
		ldrslt 	=> ldrslt,
		Start 	=> Start,
		Done 		=> Done,
		ABus 		=> ABus,
		BBus 		=> BBus,
		oBus 		=> oBus
	);

	CU	: ENTITY WORK.Controller
	PORT MAP(
		Clock 	=> Clock,
		Reset 	=> Reset,
		Done 		=> Done,
		ST 		=> ST,
		Initial 	=> Initial,
		ldA 		=> ldA,
		ldB 		=> ldB,
		ldrslt 	=> ldrslt,
		Start 	=> Start
	);

end Behavioral;

