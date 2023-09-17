#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int pair = 0, cnt = 0;
        int l  = 0,r = n-1;
        while(l<r)
        {
            if(s[l] == s[r])
                pair+=2;
            else
                cnt++;
            l++,r--;
        }
        string ans = "";
        for(int i=0;i<=n;i++)
        {
            int total = i;
            total -= cnt;
            if(total<0)
            {
                ans.push_back('0');
                continue;
            }

            total = max((total%2),total-pair);
            total = max(0,total-(n%2));

            if(total == 0)
                ans.push_back('1');
            else
                ans.push_back('0');
        }
        cout<<ans<<endl;
    }
    

    return 0;
}