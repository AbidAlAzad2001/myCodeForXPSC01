#include"bits/stdc++.h"
using namespace std;

void TEST_CASE()
{
    int x,y,n;
        cin>>x>>y>>n;
        vector<int>ans(n);
        ans[n-1] = y;
        int cnt = 1;

        for(int i=n-2;i>=0;i--)
        {
            ans[i] = ans[i+1] - cnt;
            cnt++;
        }
        if(x<=ans[0])
        {
            ans[0] = x;
        }
        else{
            cout<<-1<<endl;
            return;
        }
        for(int i: ans)
                cout<<i<<" ";
            cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        TEST_CASE();
    }

    return 0;
}