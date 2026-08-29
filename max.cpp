#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maximum=-1;
    for(int i=0;i<n;i++)
    {
        int curr;
        cin>>curr;
        if(curr>maximum)
        {
            maximum=curr;
        }
    }
    cout<<maximum;
}
