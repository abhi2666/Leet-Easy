/*
Move zeroes to the right of the array (in-place)
*/

vector<int> Solution::solve(vector<int> &A) {

    vector<int>ans;
    int cnt = 0;
    for(int i : A)
    {
        if(i == 0) cnt++;
    }
    for(int i : A)
    {
        if(i != 0)
        {
            ans.push_back(i);
        }
    }
    ans.append(0, cnt);

    return ans;

}