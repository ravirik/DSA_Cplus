#include<bits/stdc++.h>

using namespace std;

void pattern16(int n)
{
    char b = 'A';
    for(int i=1; i<=n; i++)
    {
        for(char ch='A'; ch<=b; ch++)
        {
            cout<<b<<' ';
        }
        b += 1;
    cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        pattern16(n);
    }
}