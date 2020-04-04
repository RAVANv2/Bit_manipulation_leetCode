#include<bits/stdc++.h>
using namespace std;

int ans(int arr[],int n)
{
  if(n%2==0)
    return 0;
  int ans=0;
  for(int i=0;i<n;i+=2)
    ans ^=arr[i];
  return ans;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    int a;
    a=ans(arr,n);
    cout<<a<<endl;
  }
}
