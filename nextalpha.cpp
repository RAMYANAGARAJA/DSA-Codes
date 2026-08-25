#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c=='z')
    {
        cout<<'a';
        return 0;
    }
    int a=int(c);
    char next=char(a+1);
    cout<<next;
}
