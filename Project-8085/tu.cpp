#include<bits/stdc++.h>
using namespace std;
int isodd(int n,int x)
{
	int s;
	s=n*x;
	cout<<s<<" ";
	
}
int iseven(int n,int y)
{
	int s;
	s=y*n;
	cout<<s<<" ";
}
int main()
{
	int n,i,s=0,s1=0,x,y;
	cin>>n;
	cin>>x>>y;
	for(i=1;i<=n;i++)
	{
	if(i%2!=0)
	{
	s=isodd(s,x);
	//cout<<s<<" ";
	s++;
	}
	else
	{
	s1=iseven(s1,y);
	//cout<<s1<<" ";
	s1++;
	}	

	}
	return 0;
}
