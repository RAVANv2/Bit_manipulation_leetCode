class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,ans=0,ans2=0;
        ans = accumulate(nums.begin(),nums.end(),sum);
        n=nums.size();
        while(n)
        {
        	ans2 = ans2+n;
        	n--;
        }
        return ans2-ans;
    }
};