#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        int left=0;
        int right=n-1;
        bool found=false;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(arr[mid]==x)
            {
                found=true;
                break;
            }
            else if(arr[mid]<x)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        if(found)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }

}
