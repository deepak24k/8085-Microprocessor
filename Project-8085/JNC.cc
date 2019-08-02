#include "GeneralUtility.h"

void JNC(mos::iterator &itr,string addr,flg&f){
	   if(f["CF"]==false){
	   	    while(itr->first!=addr)itr++;
	   }
}
