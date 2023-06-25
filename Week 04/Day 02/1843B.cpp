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
        long long sum = 0;
        long long cnt = 0;
        int flag = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if(a<=0)
            {
                if(a<0)
                flag = 1;
            }
            else
            {
                if(flag == 1)
                cnt++;
                flag=0;
            }
            if(a<0)
            a = a*-1;
            sum = sum+(long)a;
        }

        if(flag == 1)
        cnt++;
        cout<<sum<<" "<<cnt<<endl;
    }
    

    return 0;
}