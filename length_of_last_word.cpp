#include <bits/stdc++.h>
#include<string>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        for (int i = 0; i <=strlen(s); i++)
        {
            //if ((strcmp(s,"Bhushan Deshmukh"))!=0)
              //  count = 0;
            count++;
        }
        // cout<<count;
        return count;
    }
};
int main()
{
    Solution s;
    cout << s.lengthOfLastWord("BHushan Deshmukh");
    return 0;
}