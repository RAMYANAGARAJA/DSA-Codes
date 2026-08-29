#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> answer;
    for(int i=a;i<=b;i++)
    {
        int temp=i;
        bool lucky=true;
        while(temp>0)
        {
            int digit=temp%10;
            if(digit!=4 && digit!=7)
            {
                lucky=false;
                break;
            }
            temp=temp/10;
        }
        if(lucky==true)
        {
            answer.push_back(i);
        }
    }
    if(answer.empty())
    {
        cout<<-1;
    }
    else
    {
        for(int i=0;i<answer.size();i++)
        {
            cout<<answer[i]<<" ";
        }
    }
}
