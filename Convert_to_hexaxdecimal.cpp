class Solution {
public:
    string toHex(int num)
    {
        long int n=num;
        if(n==0)
            return "0";
        if(n<0)
            n=4294967296+n;
    	string s;
    	while(n)
    	{
    		int p = n%16;
    		if(p<10)
    			s.push_back(p+48);
    		else if(p==10)
    			s.push_back('a');
    		else if(p==11)
    			s.push_back('b');
    		else if(p==12)
    			s.push_back('c');
    		else if(p==13)
    			s.push_back('d');
    		else if(p==14)
    			s.push_back('e');
    		else if(p==15)
    			s.push_back('f');
    		n = n/16;
    	}
    	reverse(s.begin(),s.end());
    	return s;
    }
};