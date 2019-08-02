#include "GeneralUtility.h"
map<int,char>alpha;

string ADD(string a,string b,flg&flags){
	alpha[0]='0';alpha[1]='1';alpha[2]='2';alpha[3]='3';alpha[4]='4';alpha[5]='5';alpha[6]='6';alpha[7]='7';alpha[8]='8';
	alpha[9]='9';alpha[10]='A';alpha[11]='B';alpha[12]='C';alpha[13]='D';alpha[14]='E';alpha[15]='F';
	bool flag=false;
	int j=0,c=0;
	int i=1;
	int k,l,sum;
    while(i>=0){
    	if(a[i]>=48 && a[i]<=57)k=(a[i]-'0');
    	else if(a[i]>='A' && a[i]<='F')k=(a[i]-55);
    	if(b[i]>=48 && b[i]<=57)l=(b[i]-'0');
    	else if(b[i]>='A' && b[i]<='F')l=(b[i]-55);
    	sum=k+l+c;
    	if(sum>15){
    	sum=sum%16;
    	c=1;
        }
        else c=0;
    	a[i]=alpha[sum];
    	i--;
	}
	if(c==1){
		flags["CF"]=true;
	}
	else flags["CF"]=false;
	if(a=="00" || a=="00H")flags["ZF"]=true;
	else flags["ZF"]=false;
	return a;
}
