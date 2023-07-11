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
        int one = 0,two = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] == 1)   
                one++;
            else
                two++;
        }
        if((one == 1 and two == 1) or (one == 0 and two%2 ==0) or (one%2 != 0 and two==0))    
            cout<<"NO\n";
        else if((one == two and one%2 ==0 and two%2 == 0) or (one%2 == 0 and two%2==0))
            cout<<"YES\n";
        else
        {
            if(abs(one-(2*two))%2 == 0)
                cout<<"YES\n";
            else    
                cout<<"NO\n";
        }
    }

    return 0;
}