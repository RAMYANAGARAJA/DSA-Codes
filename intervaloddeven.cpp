#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if ((a == b || abs(a - b) == 1) && a + b > 0)
        cout << "YES";
    else
        cout << "NO";
}

