#include "GeneralUtility.h"

void CMA(mos&registers){
	string str=registers["A"];
	string res="";
	int n,total_bits,num;
	int i=1;
	while(i>=0){
		if(str[i]>='0' && str[i]<='9')n=str[i]-'0';
		else if(str[i]>='A' && str[i]<='F')n=str[i]-55;
		total_bits=log2(n)+1;
		num=15;
		num^=n;
		if(num>=10 && num<=15)str[i]=char(num+55);
		else if(num>=0 && num<=9)str[i]=char(48+num);
		i--;
	}
	registers["A"]=str;
}
