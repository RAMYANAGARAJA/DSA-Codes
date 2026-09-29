#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minimum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        minimum=min(minimum,arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==minimum)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"Unlucky";
    }
    else
    {
        cout<<"Lucky";
    }
}
