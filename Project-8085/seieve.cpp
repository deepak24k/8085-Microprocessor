#include<bits/stdc++.h>
using namespace std;
int main()
	{
		int N,j,k;
		cin>>N;
		bool prime[N+1]={false};
		k=sqrt(N+1);
		for(int i=2;i<=k;i++)
		{
		if(prime[i]==false)
		for(j=2;j<N+1;j++)
		{
		if(i*j<N+1)
		prime[i*j]=true;
		else
		break;	
		}
		}
		for(int i=2;i<N+1;i++)
		{
			if(prime[i]==false)
			cout<<i<<" ";
		}
	}
