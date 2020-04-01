class Solution {
public:
    bool isPowerOfFour(int n) {
        return (n>0) and !(n&(n-1)) and !(n&(2863311530));
    }
};