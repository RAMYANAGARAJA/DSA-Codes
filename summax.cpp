#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    for(int i=0;i<tests;i++)
    {
        long long n,s;
        cin>>n>>s;
        long long maximum=n*(n+1)/2;
        if(s>maximum)
        {
            cout<<-1<<endl;
            continue;
        }
        for(long long i=n;i>=1 && s>0;i--)
        {
            if(i<=s)
                {
                    cout<<i<<" ";
                    s=s-i;
                }
        }
        cout<<endl;
    }
    return 0;
}
