library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Multiplier is

	PORT
	(
		InputA	:	IN		unsigned(07 DOWNTO 0);
		InputB	:	IN		unsigned(07 DOWNTO 0);
		Output	:	OUT	unsigned(15 DOWNTO 0)
	);

end Multiplier;

architecture Behavioral of Multiplier is

	TYPE Array_Multiplier IS ARRAY (0 TO 7) OF unsigned(0 TO 7);
	Signal PT	:	Array_Multiplier;

	TYPE SC_Result IS ARRAY (1 TO 7) OF unsigned(0 TO 7);
	Signal Sum	: SC_Result;
	Signal Cout : SC_Result;

begin
	---------------------------------------------------------------------------------------------------------------------
   Generate_1: FOR i IN 0 TO 7 GENERATE
      Generate_2:FOR j IN 0 TO 7 GENERATE
           PT(i)(j) <= InputA(j) and InputB(i);    
        END GENERATE; 
    END GENERATE;
	---------------------------------------------------------------------------------------------------------------------
	Generate_3:FOR i IN 0 TO 6 GENERATE
	    GenMSB: IF i = 0 GENERATE
						HA_1: ENTITY WORK.HA 
							PORT MAP(A => PT(i)(1),B => PT(1)(0),Cout => Cout(1)(i),Sum => Sum(1)(i));
						HA_2: ENTITY WORK.HA 
							PORT MAP(A => PT(1)(7),B => PT(1)(6),Cout => Cout(1)(7),Sum => Sum(1)(7));
	    END GENERATE;
	    GenNorm: IF i>0 GENERATE 
						HA_3: ENTITY WORK.HA PORT MAP(A => Sum(i)(1),B => PT(i+1)(0),Cout => Cout(i+1)(0),Sum => Sum(i+1)(0));
	    END GENERATE;
	END GENERATE;
	---------------------------------------------------------------------------------------------------------------------
	 Generate_4: FOR j IN 0 TO 6 GENERATE
     Generate_5: FOR t IN 0 TO 5 GENERATE
			GenMSB: IF j = 0 GENERATE
					FA_1: ENTITY WORK.FA 
						PORT MAP(A => PT(j)(t+2),B => PT(j+1)(t+1),Cin => Cout(j+1)(t),Cout => Cout(j+1)(t+1),Sum => Sum(j+1)(t+1));
			END GENERATE;
		  
			GenNorm: IF j>0 GENERATE
					FA_2: ENTITY WORK.FA 
						PORT MAP(A => Sum(j)(t+2),B => PT(j+1)(t+1),Cin => Cout(j+1)(t),Cout => Cout(j+1)(t+1),Sum => Sum(j+1)(t+1));
					FA_3: ENTITY WORK.FA 
						PORT MAP(A => Cout(j)(7),B => PT(j+1)(7),Cin => Cout(j+1)(6),Cout => Cout(j+1)(7),Sum => Sum(j+1)(7));
			END GENERATE;
     END GENERATE;
    END GENERATE;
	---------------------------------------------------------------------------------------------------------------------
	Output(0)	<=	PT  (0)(0);
	Output(1)	<=	Sum (1)(0);
	Output(2)	<=	Sum (2)(0);
	Output(3)	<=	Sum (3)(0);
	Output(4)	<=	Sum (4)(0);
	Output(5)	<=	Sum (5)(0);
	Output(6)	<=	Sum (6)(0);
	Output(7)	<=	Sum (7)(0);
	Output(8)	<=	Sum (7)(1);
	Output(9)	<=	Sum (7)(2);
	Output(10)	<=	Sum (7)(3);
	Output(11)	<=	Sum (7)(4);
	Output(12)	<=	Sum (7)(5);
	Output(13)	<=	Sum (7)(6);
	Output(14)	<=	Sum (7)(7);
	Output(15)	<=	Cout(7)(7);
	---------------------------------------------------------------------------------------------------------------------
end Behavioral;

