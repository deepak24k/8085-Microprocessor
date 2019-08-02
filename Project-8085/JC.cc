#include "GeneralUtility.h"

int JC(mos::iterator &itr,string addr,flg&f){
	if(f["CF"]==true){
		while(itr->first!=addr)itr++;
	}
}
