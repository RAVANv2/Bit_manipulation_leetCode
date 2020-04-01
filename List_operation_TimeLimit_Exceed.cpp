class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
    	vector<int> v;
    	for(auto i:nums)
    	{
    		if(!count(v.begin(),v.end(),i))
    			v.push_back(i);
    		else
    		{
    			auto it = find(v.begin(),v.end(),i)
    			v.erase(it);
    		}
    		for(auto i:v)
    			cout<<i;
    	}    
    	return v[0];
    }
};