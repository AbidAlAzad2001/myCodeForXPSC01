#include"bits/stdc++.h"
using namespace std;
void TEST_CASE()
{
    int n;
    cin>>n;
    vector<int>visited(n+1);
    vector<int>ans;
    for(int i=1;i<=n;i++)
    {
        if(visited[i])
            continue;
        int now = i;
        while (now<=n)
        {
            /* code */
            if(visited[now])
                break;
            visited[now] = 1;
            ans.push_back(now);
            now*=2;
        }
        
    }
    for(int i:ans)
            cout<<i<<" ";
        cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        TEST_CASE();
    }

    return 0;
}