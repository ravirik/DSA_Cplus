#include<bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>

using namespace std;

void pattern7(int n)
{
    for ( int i=0; i<n; i++)
    {
        for ( int j=0; j<n-i-1; j++)          // space
        {
            cout <<" " << ' ';
        }
        for (int j=0; j<2*i+1; j++)           // star
        {
            cout << "*" << ' ';
        }
        for ( int j=0; j<n-i-1; j++)          // space
        {
            cout << " " << ' ';
        }
        cout << endl;
    }
}


void pattern8(int n)
{
    for ( int i=0; i<n; i++)
    {
        for ( int j=0; j<i; j++)
        {
            cout <<" "<<' ';
        }
        for ( int j=0; j<2*n-(2*i+1); j++)
        {
            cout <<"*" <<' ';
        }
        for ( int j=0; j<i; j++)
        {
            cout <<" "<<' ';
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for ( int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        pattern7(n);
        pattern8(n);
    }
}
