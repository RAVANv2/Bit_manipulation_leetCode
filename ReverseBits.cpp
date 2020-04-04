#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x=8;
	vector<int> v;
	int n=4;
while(n--)
{
		x=x>>1;
		v.push_back(x&1);
}

for(auto i:v)
	cout<<i<<" ";
}