#include<bits/stdc++.h>
using namespace std;
int main()
{
    double X, P;
    cin >> X >> P;
    double original = P / (1.0 - X / 100.0);
    double result = ceil(original * 100.0) / 100.0;
    cout<<result;
    return 0;
}
