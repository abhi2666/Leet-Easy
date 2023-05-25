/*

Max Sum Contiguous Subarray

Input-
A = [1, 2, 3, 4, -10]

Output-
10

*/

int Solution::maxSubArray(const vector<int> &A) {
    int curr_max = 0, max = INT_MIN;

    for(int i = 0; i < A.size(); i++)
    {
        curr_max += A[i];

        if(curr_max > max)
        {
            max = curr_max;
        }

        if(curr_max < 0)
        {
            curr_max = 0;
        }
    }

    return curr_max;
}

// int Solution::maxSubArray(const vector<int> &A) {
//     int sum = 0;
//     int maxsum = A[0];
//     int j = 0;
//     for(int i=0;i<A.size();i++){
//         for(j=i;j<A.size();j++){
//             sum += A[j];
//             if(sum > maxsum)
//             {
//                 maxsum = sum;
//             }
//         }
//         sum = 0;
//     }
//     return maxsum;
// }