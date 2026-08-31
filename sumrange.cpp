#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
    if(x<=0 || y<=0)
    {
        break;
    }
    int minimum=min(x,y);
    int maximum=max(x,y);
    int sum=0;
    for(int i=minimum;i<=maximum;i++)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
    }
}
