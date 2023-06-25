#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int a[], int n, int k)
{
    // Complete the function
    int sum = 0;
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            ans = max(ans, i + 1);
        }
        if (mp.find(sum - k) != mp.end())
        {
            int index = mp[sum - k];
            ans = max(ans, i - index);
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    cout<<lenOfLongSubarr(a,n,k)<<endl;

    return 0;
}