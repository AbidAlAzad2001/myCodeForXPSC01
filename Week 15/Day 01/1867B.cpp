#include<bits/stdc++.h>
using namespace std;

void test_case()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,r=n-1;
    int cnt = 0;
    int pair = 0;
    while (l<r)
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
        total = max(0,(total-(n%2)));

        if(total == 0)
            ans.push_back('1');
        else
            ans.push_back('0');
    }
    cout<<ans<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        test_case();
    }

    return 0;
}