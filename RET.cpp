#include "MASTER.h"
#include "tools.h"

string RET(string &sp, map<string,string> &memory){
    string loc1 = decimalToHexGen(hexToDecimalGen(sp)+1);
    string loc2 = decimalToHexGen(hexToDecimalGen(sp)+2);
    
    string return_value = memory[loc1] + memory[sp];
    
    sp = loc2;
    return return_value;
}
