#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        int number;
        cin>>number;
         if(number==0)
        {
            cout<<0;
        }
        while(number>0)
        {
            int digit=number%10;
            cout<<digit<<" ";
            number=number/10;
        }
        cout<<endl;
    }
}
