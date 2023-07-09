#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        if(sum%n == 0)
            cout<<sum/n<<endl;
        else
            cout<<sum/n +1<<endl;
    }

    return 0;
}