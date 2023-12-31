#include "MASTER.h"
#include "tools.h"

void DCX(string arg,string registers[],bool flag[]){
			
	int registerID = registerNumber(arg);
	if(registerID == 1 || registerID == 3 || registerID == 5){
	
		string data16bit = "";
		string temporary = "";
		string s1 = "";
		string s2 = "";
			
		data16bit = data16bit + registers[registerID] + registers[registerID + 1];
		temporary = hexSub16bit(data16bit,"0001",flag,false);
		s1 = s1 + temporary[0] + temporary[1];		
		s2 = s2 +temporary[2] + temporary[3];
		registers[registerID] = s1;
		registers[registerID+1] = s2;
	}
}
