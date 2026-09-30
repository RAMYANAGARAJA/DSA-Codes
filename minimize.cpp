#include<bits/stdc++.h>
using namespace std;
int counting(vector<int> &arr,int n,int counted)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            return counted;
        }
        else
        {
            arr[i]=arr[i]/2;
        }
    }
    counted++;
    return counting(arr,n,counted);
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counted=0;
    int answer=counting(arr,n,counted);
    cout<<answer;
}
