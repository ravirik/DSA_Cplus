#include<bits/stdc++.h>

using namespace std;

void pattern6(int n)
{
    for ( int i=n; i>0; i--)
    {
        for ( int j=1; j<=i-1; j++)
        {
            cout <<j <<' '; 
        }
        cout << endl;
    }
}

int main()
{
    int n = 10;

    pattern6(n);

    return 0;
}