#include "GeneralUtility.h"
void LHLD(mos&r,mos&m,string s){
	r["L"]=m[s];
	string s1=update(s,1);
	r["H"]=m[s1];
}
