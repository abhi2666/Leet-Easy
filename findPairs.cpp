int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[ar[i]]++;
    }

    // finding pairs
    int countPairs = 0;
    for(auto m : mp)
    {
        int res =  m.second / 2;
        if(res > 0)
        {
            countPairs++;
        }
    }

    return countPairs;

}