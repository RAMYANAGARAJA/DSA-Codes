#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x>>y;
    string dummy1=x;
    string dummy2=y;
    sort(dummy1.begin(),dummy1.end());
    sort(dummy2.begin(),dummy2.end());
    if(x.length()<y.length() && x==dummy1)
    {
        cout<<x;
    }
    else
    {
        cout<<y;
    }
}
