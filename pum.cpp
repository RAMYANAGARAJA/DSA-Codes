#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lines;
    cin>>lines;
    int num=1;
    while(lines>0)
    {
        cout<<num<<" "<<num+1<<" "<<num+2<<" "<<"PUM"<<endl;
        num+=4;
        lines--;
    }
}
