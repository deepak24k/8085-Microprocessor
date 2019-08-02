#include "GeneralUtility.h"
#include "Arithmetic.h"
void CMP(mos&r,mos&m,string arg,flg&flags){
	   string ans;
	   if(arg=="M"){
	   	   ans=SUB(r["A"],m[arg],flags);
	   }
	   else{
           ans=SUB(r["A"],r[arg],flags); 	   
	   }
	   if(ans=="00" || ans=="00H")flags["ZF"]=1;
	   else flags["ZF"]=0;
}
