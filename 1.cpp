#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int num = t;
	while(t)
	{
		string s;
		vector<char> v;
		cin>>s;

		int ele;
		int par,diff,next=0,diff1;
		for(int i=0;i<s.length();i+=2)
		{
				ele = (s[i]-48);
				diff1=abs(ele-next);
				while(diff1--)
					v.push_back('(');
				v.push_back(s[i]);

				if(i<s.length()-1)
				{
					diff=abs(ele-(s[i+1]-48));
					while(diff--)
						v.push_back(')');
					next = s[i+1]-48;
					v.push_back(s[i+1]);
				}
				else
				{
					while(ele--)
					v.push_back(')');
				}
		}
		t--;
		cout<<"Case #"<<num-t<<":"<<" ";
		for(auto i:v)
			cout<<i;
		cout<<endl;
	}
}
