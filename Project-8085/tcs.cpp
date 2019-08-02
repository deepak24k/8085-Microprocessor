#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if(n==0 ||n==1)
	return n;
	else
	return fib(n-1)+fib(n-2);
}
isprime(int n,int n1)
{
	int s;
	int k=0,k1,j;
	s=2*(n1+1);
	int b[s];
	bool prime[s]={false};
	k1=sqrt(s);
	for(int i=2;i<=k1;i++)
	{
		if(prime[i]==false)
		for(j=2;j<s;j++)
		{
			if(i*j<s)
			prime[i*j]=true;
		}
	}
	for(int i=2;i<s;i++)
	{
		if(prime[i]==false)
		{
		//cout<<i<<" ";
		b[k]=i;
		k++;
		}
	}
	cout<<b[n-1];

}

int main()
	{
		int n,i,j;
		cin>>n;
		if(n%2!=0)
		cout<<fib(n/2+1);
		if(n%2==0)
		isprime(n/2,n);	
		return 0;
	}
