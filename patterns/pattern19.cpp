#include<bits/stdc++.h>

using namespace std;

void pattern19(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<'*';
        }
        for(int j=0; j<2*i; j++)
        {
            cout<<' ';
        }
        for(int j=0; j<n-i; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<'*';
        }
        for(int j=0; j<(2*(n-i-1)); j++)
        {
            cout<<' ';
        }
        for(int j=0; j<i+1; j++)
        {
            cout<<'*';
        }
        cout<<endl;
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
        pattern19(n);
    }
}