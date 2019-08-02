#include "GeneralUtility.h"

void JNZ(mos::iterator &itr,string str,flg&f){
	if(f["ZF"]==false){
		while(itr->first!=str)itr--;
		itr--;
	}
}
