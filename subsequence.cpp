#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<long long> array1(a);
    vector<long long> array2(b);
    for(int i=0;i<a;i++)
    {
        cin>>array1[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>array2[i];
    }
    int k=0,n=0;
    bool subsequence=true;
    while(n<b)
    {
        bool found=false;
        for(int i=k;i<a;i++)
        {
            if(array1[i]==array2[n])
            {
                k=i+1;
                found=true;
                break;
            }
        }
        if(!found)
        {
            subsequence=false;
            break;
        }
        n++;
    }
    if(subsequence)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
