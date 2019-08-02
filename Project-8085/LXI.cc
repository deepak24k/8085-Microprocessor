#include "GeneralUtility.h"

void LXI(mos&r,string data,string reg){
	          string str="";
	          str=str+data[0];
	          str=str+data[1];
	          r[reg]=str;
	          str="";
	          str=str+data[2];
	          str=str+data[3];
	          if(reg=="H"){
	          	 r["L"]=str;
			  }
			  else if(reg=="B"){
			  	 r["C"]=str;
			  }
			  else if(reg=="D"){
			  	 r["E"]=str;
			  }
			  
}
