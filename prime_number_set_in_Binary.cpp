class Solution {
public:
    int countPrimeSetBits(int L, int R)
    {
    	int ans=0,count=0;
    	bool prime[] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1}
    	for(int i=L;i<=R;i++)
    	{
    		ans = __builtin_popcount(i);
    		if(prime[ans])
    			count++;
    	}	    
    	return count;
    }
};