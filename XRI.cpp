#include "header/MASTER.h"
#include "header/tools.h"


void XRI(string arg, string registers[],bool flag[],map<string,string> &memory){
			
    string data = memory[arg];

    flag[0]=false;

    int A_val = hexToDecimalGen(registers[0]);
    int M_val = hexToDecimalGen(data);

    bitset<8> A_bin(A_val);
    bitset<8> M_bin(M_val);
    bitset<8> variable;

    for(int i=0;i<8;i++){
        if(A_bin.test(i) != M_bin.test(i)){
            variable.set(i);
        }
    }

    int parity = variable.count();
    if(parity%2 == 0 && parity!=0)
        flag[2] = true;
    else
        flag[2] = false;
    flag[7] = variable[7];
    if(parity == 0)
        flag[6] = true;
    
    registers[0] = decimalToHexGen(variable.to_ulong());
}