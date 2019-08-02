#include<cstdio>
#include "GeneralUtility.h"
class SimulatorMain{
	private:
		mos memory;
		mos inStore;
		flg flags;
		mos registers;
		string PC,st,str;
		int IT;
	public:	
		SimulatorMain(){
			flags["SF"]=false;
			flags["ZF"]=false;
			flags["ACF"]=false;
			flags["PF"]=false;
			flags["CF"]=false;
			registers["A"]="";registers["B"]="";registers["C"]="";registers["D"]="";registers["E"]="";registers["H"]="";
			registers["L"]="";
			st="";
			PC="";
		}
		inputPC(){
			cout<<"Starting Address:";
		    cin>>st;
		    PC=st;
		    if(!checkAddr(PC)){
		    	cout<<"Invalid Memory!";
		    	exit(0);
		    }
		}
		void start(){
			cin.ignore();
		    cout<<"\nStart typing your code:\n\n";
				 while(1){
				 	cout<<"=>"<<PC<<":"<<" ";
				 	getline(cin,str);
				 	inStore[PC]=str;
					IT=instructionType(str);
				 	PC=update(PC,IT);
				 	if(str=="HLT"){
					 break; 
				    }
				 }   
			}
			void execute(){
				for(mos::iterator i=inStore.begin();i!=inStore.end();i++){
					string str=i->second;
					cout<<str<<"\n";
					instruction_center(i,str,registers,memory,flags,inStore);
				}
			}
	        void query(){
	        	cout<<"\n________________________________________________________________________________________________________________________\n";
	        	cout<<"*Instructions*\n";
	            cout<<left<<setw(40)<<"Printing Registers Info :"<<setw(15)<<"PRI REG"<<endl
	            <<setw(40)<<"Printing Flag Info :"<<setw(15)<<"PRI FLG"<<endl<<
	            setw(40)<<"Printing Value at Memory Location :"<<"PRI (Memory location)\n";
	            
	            cout<<left<<setw(40)<<"Edit Memory :"<<setw(15)<<"EDITM (Address)"<<endl
	            <<setw(40)<<"Edit Code :"<<setw(15)<<"EDITC (Address)"<<endl<<
	            setw(40)<<"Execute Program :"<<"EXEC (Starting Address)\n";
	            cout<<"________________________________________________________________________________________________________________________\n";
			while(1){
				cout<<"=>";
				string str1,str2;
				cin>>str1>>str2;
				if(str1=="PRI"){
					      if(str2=="REG"){
							        for(mos::iterator i=registers.begin();i!=registers.end();i++){
				                    	cout<<"|    "<<left<<setw(7)<<i->first<<right<<"|"<<setw(7)<<i->second<<right<<"|"<<endl;
									}
									cout<<endl;
					        }
					       else if(str2=="FLG"){
							        for(flg::iterator i=flags.begin();i!=flags.end();i++){
				                    	cout<<"|    "<<left<<setw(7)<<i->first<<right<<"|"<<setw(7)<<i->second<<right<<"|"<<endl;
									}
									cout<<endl;
					        }
				           else{
					                cout<<str2<<":"<<memory[str2]<<"\n";
				               }
		               }
		        else if(str1=="EDITM"){
		        	  string addr;
		        	  while(1){
		        	  	cout<<str2<<":"<<memory[str2]<<":";
		        	  	cin>>addr;
		        	  	if(addr=="END")break;
		        	  	memory[str2]=addr;
		        	  	str2=update(str2,1);
					  }
		        	
				}
				else if(str1=="EDITC"){
					  cin.ignore();
					  string code;
					  cout<<"Edit Code:\n";
					  while(1){
					  	cout<<str2<<":"<<inStore[str2]<<":";
					  	getline(cin,code);
					  	if(code=="END")break;
					  	inStore[str2]=code;
					  	IT=instructionType(code);
				 	    str2=update(str2,IT);
					  }
				}
				else if(str1=="EXEC"){
					   execute();
					   cout<<"Code Executed Successfully!\n";
				}
				else{
					cout<<"Invalid Query!\n";
				}
					 }   
			}
};
int main(){
    cout<<"_____________________________________"<<"MicroProcessor-8085"<<"___________________________________________________________"<<"\n";
    cout<<"\n\n";
	SimulatorMain s;
	s.inputPC();
	s.start();
	s.query();
}
