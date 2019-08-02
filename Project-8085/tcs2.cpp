#include<bits/stdc++.h>
using namespace std;
int main()
	{
		string str,str2,str3,str4="";
		cin>>str>>str2>>str3;
		for(int i=0;i<str.length();i++)
		{
			
			if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
			{
			str[i]='%';
			}
			
		}
		for(int i=0;i<str2.length();i++)
		{
			if(str2[i]!='a'&& str2[i]!='A'&& str2[i]!='E'&& str2[i]!='e'&& str2[i]!='i'&& str2[i]!='I'&& str2[i]!='o'&& str2[i]!='O'&& str2[i]!='u'&& str2[i]!='U')
			{
				str2[i]='#';
			}
		}
		for(int i=0;i<str3.length();i++)
		{
			char c=str3[i];
			if(islower(c))
			{
				str3[i]=toupper(c);
			}
		}
		str4=str+str2+str3;
		cout<<str4;
		return 0;
	}
