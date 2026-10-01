#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<freq[i]<<endl;
    }
}
