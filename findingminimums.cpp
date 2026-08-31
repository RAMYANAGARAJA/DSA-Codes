#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> answer;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int curr=0;
    while(curr<n)
    {
        int minimum=INT_MAX;
        for(int i=curr;i<min(curr+k,n);i++)
        {
            if(minimum>arr[i])
            {
                minimum=min(minimum,arr[i]);
            }
        }
        answer.push_back(minimum);
        curr=curr+k;
    }
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
}
