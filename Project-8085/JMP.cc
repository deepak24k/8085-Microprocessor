#include "GeneralUtility.h"

void JMP(mos::iterator &itr,string arg,flg&f){
	while(itr->first!=arg)itr++;
}
