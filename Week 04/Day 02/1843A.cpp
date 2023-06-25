#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int i=0,j=a.size()-1,sum=0;
        while(i<j)
        {
            sum+=a[j]-a[i];
            i++;
            j--;
        }
        cout<<sum<<endl;
    }

    return 0;
}