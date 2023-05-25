class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        int i = 1;
        while(i < n)
        {
            i *= 2;
            if(i == n) return true;
        }
        return false;
    }
};