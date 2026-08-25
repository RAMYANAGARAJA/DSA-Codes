#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int digit1=num%10;
    int digit2=num/10;
    if(digit1%digit2==0 || digit2%digit1==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
