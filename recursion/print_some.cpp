#include<bits/stdc++.h>

using namespace std;

void print_some(int n, int cnt =0)
{
    if (cnt<n)
    {
        cout<<cnt<<endl;
        print_some(n, cnt+1);
    }
    else return;
}


int main()
{
    int t;
    cin>>t;
    for ( int i=1; i<t; i++)
    {
        int n;
        cin>>n;
        print_some(n);
    }
}