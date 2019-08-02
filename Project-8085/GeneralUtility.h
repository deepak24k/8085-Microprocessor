#include<bits/stdc++.h>
using namespace std;
typedef map<string,string> mos;
typedef map<string,bool> flg;

bool checkAddr(string);
int instructionType(string);
string update(string,int);
void instruction_center(mos::iterator&,string,mos&,mos&,flg&,mos&);
int computeParity(string);

