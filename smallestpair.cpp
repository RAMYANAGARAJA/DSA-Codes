#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    for(int i=0; i<tests; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int minimum = INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int curr = arr[i] + arr[j] + (j+1)- (i+1);
                minimum=min(minimum,curr);
            }
        }
        cout << minimum <<endl;
    }
}
