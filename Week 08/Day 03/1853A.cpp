#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Abid;
    cin >> Abid;

    while (Abid--)
    {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(),b.end());
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[i])
            {
                cout<<0<<endl;
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            long long mn = INT_MAX;
            long long ind;
            for(int i=0;i<n-1;i++)
            {
                if(a[i+1] - a[i]<mn)
                {
                    mn = a[i+1] - a[i];
                    ind = i;
                }
            }
            long long ans;
            ans = (a[ind+1] - a[ind])/2 +1;
            cout<<ans<<endl;
        }
    }

    return 0;
}