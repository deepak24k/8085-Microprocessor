#include "GeneralUtility.h"
int instructionType(string str1){
	int i;
	string onebyte[] = {"HLT","MOV","STAX","XCHG","ADD","SUB","INR","DCR","INX","DCX","DAD","CMA","CMP"};
	string twobyte[] = {"MVI","ADI","SUI"};
	string threebyte[] = {"LXI","LDA","STA","SHLD","LHLD","JMP","JC","JNZ","JNC","JZ","SET"};
	int n=str1.length();
	char str[n + 1]; 
    strcpy(str, str1.c_str()); 
	char *token = strtok(str, " ");
	for(i=0;i<13;i++){
		if(onebyte[i]==token)return 1;
	}
	for(i=0;i<3;i++){
		if(twobyte[i]==token)return 2;
	}
	for(i=0;i<11;i++){
		if(threebyte[i]==token)return 3;
	}
	return 0;
}
