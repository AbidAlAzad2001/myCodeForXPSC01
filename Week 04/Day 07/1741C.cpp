// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;i++)
//             cin>>a[i];
//         int ans=n;
//         long long segsum = 0;
//         for(int i=0;i<n;i++)
//         {
//             segsum+=a[i];
//             long long sum = 0;
//             int len = 0,mxlen = i+1;
//             bool possible = false;
//             for(int j=i+1;j<n;j++)
//             {
//                 if(sum+a[j]>segsum)
//                 {
//                     break;
//                 }
//                 if(j == n-1 and sum+a[j]==segsum)
//                 {
//                     mxlen=max(mxlen,len+1);
//                     possible = true;
//                     break;
//                 }
//                 sum+=a[j];
//                 len++;
//                 if(sum==segsum)
//                 {
//                     mxlen = max(mxlen,len);
//                     len = 0;
//                     sum = 0;
//                 }
//             }
//             if(possible)
//             ans = min(ans,mxlen);
//         }
//         cout<<ans<<endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = n;
        long long segSum = 0;
        for (int i = 0; i < n; i++)
        {
            segSum += a[i];
            int sum = 0;
            int len = 0, mxlen = i + 1;
            bool possible = false;
            for (int j = i + 1; i < n; j++)
            {
                if (sum + a[j] > segSum)
                    break;
                if (j == n - 1 and sum + a[j] == segSum)
                {
                    mxlen = max(mxlen, len + 1);
                    possible = true;
                    break;
                }
                sum += a[j];
                len++;
                if (sum == segSum)
                {
                    mxlen = max(mxlen, len);
                    len = 0;
                    sum = 0;
                }
            }
            if (possible)
            {
                ans = min(ans, mxlen);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}