      AREA SUMOFNO,CODE,READONLY
ENTRY
      LDR R1,=123
	  MOV R2,#10
	  MOV R3,#0
LOOP  BL DIV
      ADD R3,R3,R5
	  CMP R4,#0
	  MOVNE R1,R4
	  BNE LOOP
STOP B STOP
DIV   MOV R4,#0
LOOP1  SUBS R1,R1,R2
      ADDPL R4,R4,#1
	  BPL LOOP1
	  ADDMI R5,R1,R2
      BX LR
      END