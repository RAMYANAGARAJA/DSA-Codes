#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int main=0;
    int secondary=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                main+=matrix[i][j];
            }
            if(i==n-j-1)
            {
                secondary+=matrix[i][j];
            }
        }
    }
    cout<<abs(main-secondary);
}
