#include<bits/stdc++.h>
using namespace std;
int  fib(int n)
{
	if(n==0||n==1)
	return n;
	return fib(n-1)+fib(n-2);

	
}
int isprime(int b[],int n,int r)
{
	int i,j,k=0;
	for(i=2;i<n;i++)
	{
		if(b[i]==false)
		{
			for(j=2;j<n;j++)
			{
				if(i*j<n)
				{
					b[i*j]=true;
				}
				else
				break;
			}
		}
	}
	for(i=2;i<n;i++)
	{
	if(b[i]==false)
	b[k]=i;
	k++;
	}
	if(r==2)
	cout<<2<<" ";
}

int main()
	{
		int j,k1=1;
		int n,i,u=1,k=0;
		cin>>n;
		k=n/2;
		int prime[n+1]={false};
		
		for(i=1;i<=n;i++)
		{
		if(i%2!=0)
		{
		cout<<fib(u)<<" ";
		u++;
		}
		else
		{
		if(i==2)
		{
		isprime(prime,n+1,i);
		}
		if(i>2 && k1<k)
		{
			cout<<prime[k1]<<" ";
			k1++;
			
		}
	}
}
		return 0;
	}
