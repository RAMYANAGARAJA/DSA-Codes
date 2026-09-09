#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long id;
    cin>>id;
    long long row;
    row=id/4;
    int col=id%4;
    if(row%2!=0)
    {
        col=3-col;
    }
    cout<<row<<" "<<col<<endl;
}
