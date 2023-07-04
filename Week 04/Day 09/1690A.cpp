#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int num1,num2,num3;
        for(int i=1;i<=n;i++)
        {
            num1 = i;
            int rem = n-num1;
            if(rem%2 == 0)
                num2 = 1 + (rem/2);
            else
                num2 = (rem+1)/2;
            num3 = n - num1 - num2;
            if(num2>0 and num3>0 and num1>0 and num1>num2 and num2>num3)
                break;
        }
        cout<<num2<<" "<<num1<<" "<<num3<<endl;
    }
    

    return 0;
}