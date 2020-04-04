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

		for(int i=0;i<s.length();i++)
		{
			next = s[i+1]-48;
			int curr = s[i]-48;
			while(curr--)
				v.push_back('(');
			v.push_back(s[i]);


			if(next>curr)
			{
				int diff1 = next-curr;
				while(diff1--)
					v.push_back('(');
			}
			else
			{
				int diff = curr-next;
				while(diff--)
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
