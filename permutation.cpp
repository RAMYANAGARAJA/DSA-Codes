#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    if(arr1 == arr2)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
