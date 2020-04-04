class Solution {
public:
    char findTheDifference(string s, string t)
    {
    	char res = t[0];
    	for(int i=0;i<s.length();i++)
    	{
    		res = res^s[i]^t[i+1];
    	}
    	return res;
    }
};