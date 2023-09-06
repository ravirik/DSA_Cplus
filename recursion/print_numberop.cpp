#include<bits/stdc++.h>

using namespace std;

void print_numberop(int i, int n)
{
    if(i<1) return;
    
    cout<<i<<endl;
    print_numberop(i-1,n);
}

int main()
{
    int t;
    cin>>t;
    for (int i=1; i<t; i++)
    {
        int n;
        cin>>n;
        print_numberop(n,n);
    }
}