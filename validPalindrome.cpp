#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalin(string str)
    {
        int left = 0, right = str.size() - 1;
        while (left < right)
        {
            if (str[left] != str[right])
                return false;
        }
        return true;
    }

    bool isPalindrome(string s)
    {
        string str = "";

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'B'))
            {
                str += tolower(s[i]);
            }
            i++;
        }

        cout<<str<<endl;
        return true;
    }
};

int main()
{
    Solution s;
    cout<<s.isPalindrome("A man, a plan, a canal: Panama")<<endl;
    return 0;
}