class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
            return false;
        return n && !(n&(n-1));
    }
};