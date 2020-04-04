class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long a=n;
        a^=a>>1;
        return !(a&(a+1));
    }
};