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
    if(!(num&(num+1)))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}
