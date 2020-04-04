#include<iostream>
using namespace std;
long long int main()
 {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n];
		for(long long int i=0;i<n;i++)
			cin>>arr[i];
		long long int res;
		for(long long int i=0;i<n;i++)
			res ^=arr[i]; 
		cout<<res;
	}
	return 0;
}