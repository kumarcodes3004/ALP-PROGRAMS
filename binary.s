	AREA BINS,CODE
	LDR R0,=ARRAY
	LDR R1,=KEY
	LDR R2,[R1]
	MOV R1,#0
	MOV R3,#4
NEXT
	CMP R1,R3
	MOVGT R4,#-1
	BGT OVER
	ADD R4,R1,R3
	ASR R4,#1
	MOV R5,#0
	ADD R5,R4,LSL #2
	ADD R5,R0
	LDR R6,[R5]
	CMP R2,R6
	BEQ OVER
	SUBLT R3,R4,#1
	ADDGT R1,R4,#1
	BAL NEXT
OVER B OVER
ARRAY DCD	0X11,0X22,0X33,0X44,0X55
KEY DCD 0X1
	END
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	