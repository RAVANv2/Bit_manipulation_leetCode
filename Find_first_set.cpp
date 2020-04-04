#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		int ans = num&(-num);
		cout<<ans<<endl;
	}
}
