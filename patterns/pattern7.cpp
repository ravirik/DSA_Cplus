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

int main()
{
    int n = 10;

    pattern7(n);

    return 0;
}