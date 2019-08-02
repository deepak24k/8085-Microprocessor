#include "GeneralUtility.h"

void MVI(mos&r,mos&m,string reg,string data){
	string s="";
	if(reg=="M"){
		s=s+r["H"];
		s=s+r["L"];
		m[s]=data;
		cout<<m[s];
	}
	else r[reg]=data;
}
