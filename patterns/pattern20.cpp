#include<bits/stdc++.h>

using namespace std;

void pattern20(int n)
{
    for(int i=0; i<2*n-1; i++)
    {
        if (i<n)
        {
            for(int j=0; j<i+1; j++)
            {
                cout <<"*";
            }
            for(int j=0; j<2*(n-i-1); j++)
            {
                cout <<' ';
            }
            for (int j=0; j<i+1; j++)
            {
                cout <<"*";
            }
            cout<<endl;
        }
        if(i>=n)
        {
            for(int j=0; j<2*n-i-1; j++)
            {
                cout<<"*";
            }
            for(int j=0; j<2*(i-n+1); j++)
            {
                cout<<' ';
            }
            for(int j=0; j<2*n-i-1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        pattern20(n);
    }
}