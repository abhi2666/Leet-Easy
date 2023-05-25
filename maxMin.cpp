/*
find max and min element in the array
*/

int Solution::solve(vector<int> &A) {
    int min = INT_MAX, max = INT_MIN;

    for(int i = 0; i < A.size(); i++)
    {
        // check for lesser and greater simultaneously
        if(A[i] > max)
        {
            max = A[i];
        }
        else if(A[i] < min)
        {
            min = A[i];
        }
    }

    return max+min;
}