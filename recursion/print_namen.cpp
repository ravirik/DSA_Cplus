#include<bits/stdc++.h>

using namespace std;

void print_namen(int curr, int n)
{
    if (curr<n)
    {
        cout<<"Ravi"<<endl;
        curr++;
        print_namen(curr,n);
    }
}

int main()
{
    int t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        print_namen(0,n);
    }
    return 0;
}