#include<bits/stdc++.h>

using namespace std;

void pattern12(int n)
{
    int start=2*(n-1);
    for ( int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout <<j;
        }
        for (int j=1; j<=start; j++)
        {
            cout <<" ";
        }
        for (int j=i; j>=1; j--)
        {
            cout <<j;
        }
        cout << endl;
        start -= 2;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        pattern12(n);
    }
}