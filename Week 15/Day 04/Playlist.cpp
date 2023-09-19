#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mx_len = 0, cur_len = 0;
    int j = 0,i=0;
    map<int,int>mp;
    while (j < n)
    {
        if(mp.find(a[j])==mp.end() || mp[a[j]]==0)
        {
            mp[a[j]]++;
            cur_len++;
            mx_len = max(mx_len,cur_len);
            j++;
        }
        else
        {
            cur_len--;
            mp[a[j]]--;
            i++;
        }
    }
    cout << mx_len << endl;

    return 0;
}