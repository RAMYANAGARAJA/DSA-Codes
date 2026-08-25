#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char q,s;
    long long c;
    cin>>a>>q>>b>>s>>c;
    if(q=='+')
    {
         if(a+b==c)
        {
          cout<<"Yes";
        }
        else
        {
          cout<<a+b;
        }
    }
    else if(q=='-')
    {
         if(a-b==c)
        {
          cout<<"Yes";
        }
        else
        {
          cout<<a-b;
        }
    }
    else
    {
         if(a*b==c)
        {
          cout<<"Yes";
        }
        else
        {
          cout<<a*b;
        }
    }

}
