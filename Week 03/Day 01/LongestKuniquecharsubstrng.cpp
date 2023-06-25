#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k)
{
    int i = 0, j = 0, n = s.size(), unq = 0, ans = -1;
    int fr1[26] = {0};
    while (j < n)
    {
        char c = s[j];
        if (fr1[c - 'a'] == 0)
            unq++;
        fr1[c - 'a']++;
        if (unq > k)
        {
            while (unq > k)
            {
                char leftC = s[i];
                fr1[leftC - 'a']--;
                if (fr1[leftC - 'a'] == 0)
                    unq--;
                i++;
            }
        }
        if (unq == k)
        {
            ans = max(ans, j - i + 1);
        }
        j++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        cout <<longestKSubstr(s,k)<<endl;
    }

    return 0;
}