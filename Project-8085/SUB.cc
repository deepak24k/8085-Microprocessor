#include "GeneralUtility.h"
map<int,char> alpha3;

string SUB(string a,string b,flg&flags){
	alpha3[0]='0';alpha3[1]='1';alpha3[2]='2';alpha3[3]='3';alpha3[4]='4';alpha3[5]='5';alpha3[6]='6';alpha3[7]='7';alpha3[8]='8';
	alpha3[9]='9';alpha3[10]='A';alpha3[11]='B';alpha3[12]='C';alpha3[13]='D';alpha3[14]='E';alpha3[15]='F';
	bool flag=false;
	int j=0,c=0;
	int i=1;
	int k,l,sum;
    while(i>=0){
    	if(a[i]>=48 && a[i]<=57)k=(a[i]-'0');
    	else if(a[i]>='A' && a[i]<='F')k=(a[i]-55);
    	if(b[i]>=48 && b[i]<=57)l=(b[i]-'0');
    	else if(b[i]>='A' && b[i]<='F')l=(b[i]-55);
    	int sum=k-l-c;
    	if(sum<0){
		sum=16+sum;
		c=1;
	    }
	    else c=0;
    	a[i]=alpha3[sum];
    	i--;
	}
	if(c==1)flags["CF"]=true;
	else flags["CF"]=false;
	if(a=="00" || a=="00H")flags["ZF"]=true;
	else flags["ZF"]=false;
	return a;
}
