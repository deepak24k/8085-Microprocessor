#include "GeneralUtility.h"

bool checkAddr(string addr){
	int count=0;
	int len=addr.length();
	for(int i=0;i<len;i++){
		if((addr[i]>='0' && addr[i]<='9') || (addr[i]>='A' && addr[i]<='F')){
			count++;
		}
	}
	if(count==4)return true;
	else false;
}
