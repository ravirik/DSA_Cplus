#include<bits/stdc++.h>

using namespace std;

int cnt=0;
void print_some(int n)
{
    if (cnt<n)
    {
        cout<<cnt<<endl;
        cnt++;
        print_some(n);
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