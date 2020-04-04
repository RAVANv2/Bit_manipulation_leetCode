#include<bits/stdc++.h>
using namespace std;

int main
{
	int t,n,sum=0;
	cin>>t
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			sum = __builtin_popcount(i);
		cout<<sum;
	}
}