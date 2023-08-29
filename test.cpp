#include<bits/stdc++.h>

using namespace std;

void extract_num(int n)
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

        
    }

    extract_num(n);

    return 0;
}