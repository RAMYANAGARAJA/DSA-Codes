#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    if(n==1)
    {
        cout<<0;
    }
    else if(n==2)
    {
        cout<<0<<" "<<1;
    }
    else
    {
        int a=0;
        int b=1;
        cout<<a<<" "<<b<<" ";
        n=n-2;
        while(n>0)
        {
            int c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            n--;
        }
    }
}
