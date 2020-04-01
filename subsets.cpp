class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
    	vector<vector<int>> v;
    	vector<int> ans;
    	int size = nums.size();
    	for(int i=0;i<(1<<size);i++)
    	{
    		ans.clear();
    		for(int j=0;j<size;j++)
    		{
    			if(i & (1<<j))
    				ans.push_back(nums[j]);
    		}
    		v.push_back(ans);
    	} 
    	return v;   
    }
};