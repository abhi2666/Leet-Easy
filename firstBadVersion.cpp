// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while(low <= high)
        {
            int mid = (low + high) /2;
            if(isBadVersion(mid))
            {
                //if true then current version is a bad version
                // check for the previous bad version
                while(! isBadVersion(mid)) { mid--; }
                return mid;
            }
            else {
                // if current is not a bad version then move low ahead
                low++;
            }
        }
        return -1;
    }
};