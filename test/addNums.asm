SET 2000,01
SET 2001,02
LXI H,2000
MOV A,M
MOV B,A
LXI H,2001
MOV A,M
ADD B
STA 3000
HLT