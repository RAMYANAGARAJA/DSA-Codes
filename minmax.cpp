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
    int minimum=arr[0];
    int maximum=arr[0];
    int index1=0;
    int index2=0;
    for(int i=1;i<n;i++)
    {
        if(minimum>arr[i])
        {
            minimum=arr[i];
            index1=i;
        }
        if(maximum<arr[i])
        {
            maximum=arr[i];
            index2=i;
        }
    }
    arr[index1]=maximum;
    arr[index2]=minimum;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
