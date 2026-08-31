#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    for(int i=0;i<tests;i++)
    {
          int x,y;
    cin>>x>>y;
    int minimum=min(x,y);
    int maximum=max(x,y);
    int sum=0;
    for(int i=minimum+1;i<maximum;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    }
}
