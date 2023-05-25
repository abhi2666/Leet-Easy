// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         // long long int sum = 0;
//         // int n = nums.size();
//         // int max = INT_MIN;
//         // for(int i = 0; i < n; i++)
//         // {
//         //     sum += nums[i];
//         //     if(max < nums[i])
//         //     {
//         //         max = nums[i];
//         //     }
//         // }

//         // long long int fsum =( max * (max + 1) )/2;

//         // return (sum - fsum);
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int hash[n];
        for(int i = 0; i < n; i++) {
            hash[i] = 0;
        }
        
        for(int i = 0 ; i < n; i++)
        {
            hash[nums[i]]++;
            if(hash[nums[i]] > 1)
            {
                return nums[i];
            }
        }

        return -1;
    }
};