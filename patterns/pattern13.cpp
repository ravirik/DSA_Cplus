#include<bits/stdc++.h>

using namespace std;

void pattern13(int n)
{
    int num = 1;
    for( int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << num<<' ';
            num += 1;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >>t;
    for( int i=0; i<t; i++)
    {
        int n;
        cin >>n;
        pattern13(n);
    }
}