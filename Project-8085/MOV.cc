#include "GeneralUtility.h"

void MOV(mos&r,mos&m,string arg1,string arg2){
	string s="";
	if(arg1=="M"){
		s=s+r["H"];
		s=s+r["L"];
		m[s]=r[arg2];
	}
	else if(arg2=="M"){
		s=s+r["H"];
		s=s+r["L"];
		r[arg1]=m[s];
	}
	else r[arg1]=r[arg2];
}
