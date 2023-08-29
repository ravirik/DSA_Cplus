#include<bits/stdc++.h>

using namespace std;

void pattern6_1(int n)
{
    for ( int i=1; i<n; i++)
    {
        for ( int j=i; j<n-1; j++)
        {
            cout << j-i+1 <<' ';
        }
        cout << endl;
    }
}

int main()
{
    int n = 10;
    
    pattern6_1(n);

    return 0;
}