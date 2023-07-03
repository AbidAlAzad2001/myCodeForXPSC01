#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>k>>n;
        int dif = 1,j = 1;
        for(int i=1;i<=k;i++)
        {
            cout<<j<<" ";
            if(n-(dif+j)>=k-(i+1))
            {
                j=j+dif;
                dif++;
            }
            else
                j++;
        }
        cout<<endl;
    }

    return 0;
}