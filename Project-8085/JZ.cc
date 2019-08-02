#include "GeneralUtility.h"

void JZ(mos::iterator &itr,string str,flg&f){
	if(f["ZF"]==true){
		while(itr->first!=str)itr--;
		itr--;
	}
}
