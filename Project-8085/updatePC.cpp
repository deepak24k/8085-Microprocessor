#include "GeneralUtility.h"

string update(string PC,int IT){
	int i=3;
	while(i>=0){
		PC[i]=PC[i]+IT;
		if(PC[i]>57 && PC[i]<65){
			PC[i]=64+(PC[i]-'9');
			break;
		}
		else if(PC[i]>70){
			PC[i]=47+(PC[i]-'F');
			i--;
			IT=1;
		}
		else break;
	}
	return PC;
}
