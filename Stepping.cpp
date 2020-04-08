#include<bits.stdc++.h>
using namespace std;

int is_stepping(int i)
{
	string s = to_string(i);
	if(s.length()==1)
		return 1;
	for(int i=0;i<s.length()-1;i++)
	{
		int p_digit = s[i]-48;
		int c_digit = s[i]-48;
		if(abs(p_digit-c_digit)!=0)
			return 0;
	}
	return 1;
}


int main()
{
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int count=0;
		for(int i=n;i<=m;i++)
		{
			if(is_stepping(i))
				count++;
		}
		cout<<count<<endl;
	}
}