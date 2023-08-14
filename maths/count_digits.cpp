#include<bits/stdc++.h>

using namespace std;

void count_digits(int n)
{
    int count=0;
    while( n > 0)
    {
        n =  n / 10;
        count += 1;
    }
    cout<<count<<endl;
}

   

int main()
{
    int t;

    cin>>t;

    for (int i=0; i<t; i++)
    {
        int n;

        cin>>n;

        count_digits(n);
    }
}