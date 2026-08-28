#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long eyes,mouth,body;
    long long answer=0;
    cin>>eyes>>mouth>>body;
    long long first=min({eyes,mouth,body});
    eyes-=first;
    body-=first;
    mouth-=first;
    answer+=first;
    long long second=min((eyes/2),body);
    answer+=second;
    cout<<answer;
}
