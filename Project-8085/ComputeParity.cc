#include "GeneralUtility.h"
int computeParity(string a){
	int i=1;
	int sum=0;
	while(i>=0){
		if(a[i]>='A' && a[i]<='F')sum=sum+__builtin_popcount(a[i]-55);
		else sum=sum+__builtin_popcount(a[i]-48);
		i--;
	}
	return sum;
}
