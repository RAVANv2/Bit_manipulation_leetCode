int josephus(int n, int k)
{
	vector<int> v;
	for(int i=0;i<n;i++)
		v.push_back(i);

	if(v.size()==1)
		return 1;
	int kill = k-1;
	while(v.size>1)
	{
		v.erase(v.begin()+kill);
		kill = (kill+k-1)%v.size();
	}
	return v[0]+1;
}
