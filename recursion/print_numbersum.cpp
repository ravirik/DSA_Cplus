#include<bits/stdc++.h>

using namespace std;

void print_numbersum(int i, int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }
    print_numbersum(i-1,sum+i);
}

int main()
{
    int t;
    cin>>t;
    for (int j=0; j<t; j++)
    {
        int n;
        cin>>n;
        print_numbersum(n,0);
    }   
    return 0;
}