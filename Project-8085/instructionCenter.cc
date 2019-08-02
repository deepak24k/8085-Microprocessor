#include<bits/stdc++.h>
#include "GeneralUtility.h"
#include "Branch.h"
#include "Arithmetic.h"
#include "DataTransfer.h"
using namespace std;
vector<string> v;
void splitString(string s){
	int len=s.length();
	string st="";
	for(int i=0;i<=len;i++){
		if(s[i]==' ' || s[i]==',' || i==len){
		v.push_back(st);
		st="";
	    }
		else st=st+s[i];
	}
}
void instruction_center(mos::iterator &itr,string str,mos&registers,mos&memory,flg&flags,mos&inStore){
	splitString(str); 
	string ans;
	int k;
	string a="MVI";
	string b="MOV";
	string c="ADD";
	string d="LXI";
	string e="LDA";
     if(v[0]==a){

    		         MVI(registers,memory,v[1],v[2]);
    		         v.clear();  
	}
	else if(v[0]==b){
		            MOV(registers,memory,v[1],v[2]);
		             v.clear();                       
	}
	else if(v[0]==c){
		             string s1="";
		             if(v[1]=="M"){
		             	s1=s1+registers["H"];
		             	s1=s1+registers["L"];
		             	s1=memory[s1];
					 }
		             else s1=registers[v[1]];
		             ans=ADD(registers["A"],s1,flags);
		             v.clear();
		             registers["A"]=ans;
	}
	else if(v[0]==d){
		            LXI(registers,v[2],v[1]);
		            v.clear();
	}
	else if(v[0]==e){
		          LDA(registers,memory,v[1]);
		          
		          v.clear();
	}
	else if(v[0]=="ADI"){
		         ans=ADI(registers["A"],v[1],flags);
		         v.clear();
		         registers["A"]=ans;
	}
	else if(v[0]=="SUI"){
		        ans=SUI(registers["A"],v[1],flags);
		        v.clear();
		        registers["A"]=ans;
	}
	else if(v[0]=="INR"){
		        ans=INR(registers[v[1]],"01",flags);
		        registers[v[1]]=ans;
		        v.clear();
	}
	else if(v[0]=="SUB"){
		    ans=SUB(registers["A"],registers[v[1]],flags);
		    v.clear();
		    registers["A"]=ans;
	}
	else if(v[0]=="LHLD"){
		    LHLD(registers,memory,v[1]);
		    v.clear();
	}
	else if(v[0]=="DCR"){
		    ans=DCR(registers[v[1]],"01",flags);
		    registers[v[1]]=ans;
		    v.clear();
	}
	else if(v[0]=="CMP"){
		    CMP(registers,memory,v[1],flags);
		    v.clear();
	}
	else if(v[0]=="CMA"){
		    CMA(registers);
		    v.clear();
	}
	else if(v[0]=="STA"){
		           STA(memory,v[1],registers["A"]);
		           v.clear();
	}
	else if(v[0]=="JNC"){
		            JNC(itr,v[1],flags);
		            v.clear();
	}
	else if(v[0]=="JNZ"){
		            JNZ(itr,v[1],flags);
		            v.clear();
	}
	else if(v[0]=="JC"){
		           JC(itr,v[1],flags);
		           v.clear();
	}
	else if(v[0]=="JZ"){
		            JZ(itr,v[1],flags);
		            v.clear();
	}
	else if(v[0]=="JMP"){
		            JMP(itr,v[1],flags);
		            v.clear();
	}
	else if(v[0]=="HLT"){
		             v.clear();
		             return;
	}
	else if(v[0]=="XCHG"){
		            XCHG(registers);
		            v.clear();
	}
	  k=computeParity(registers["A"]);
   	  if(k%2==0)
	  flags["PF"]=true;
	  else flags["PF"]=false;
	return;
}
