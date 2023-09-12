#include<bits/stdc++.h>
using namespace std;

void TEST_CASE()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    int pair = 0;
    int cnt = 0;
    int  l = 0,r = n-1;
    while(l<r)
    {
        if(s[l]==s[r])
            pair +=2;
        else
            cnt++;
        l++,r--;
    }

    for(int i=0;i<=n;i++)
    {
        int total = i;
        total -=cnt;
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

int main()
{
    int t;
    cin>>t;
    while(t--){
        TEST_CASE();
    }
}