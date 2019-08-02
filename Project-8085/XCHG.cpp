#include "GeneralUtility.h"

void XCHG(mos&r){
	string str1;
	str1=r["H"];
	r["H"]=r["D"];
	r["D"]=str1;
	str1=r["L"];
	r["L"]=r["E"];
	r["E"]=str1;
}
