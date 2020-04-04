#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int num=t;
  while(t)
  {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        {cin>>a[i][j];}
    }

    int sum=0;
    for(int i=0,j=0;i<n&&j<n;i++,j++)
      sum +=a[i][j];       //Got a sum output

    int k=0,c=0,r=0;
    set<int> sc;
    for(int i=0;i<n;i++)
    {
      sc.clear();
      for(int k=0;k<n;k++)
      {
        sc.insert(a[k][i]);
      }
      if(sc.size()!=n)
        c++;
    }

    set<int> sr;
    for(int i=0;i<n;i++)
    {
      sr.clear();
        for(int j=0;j<n;j++)
        {
          sr.insert(a[i][j]);
        }
        if(sr.size()!=n)
          r++;
    }
    t--;
    cout<<"Case #"<<num-t<<": "<<sum<<" "<<r<<" "<<c<<endl;
  }
}
