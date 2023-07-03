#include<bits/stdc++.h>

using namespace std;

void test_pattern(int n)
{
    for( int i =1; i<n; i++)
    {
        for( int j =1; j<n; j++) 
        {
            cout <<i<< ' ';
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    test_pattern(n);

    return 0;
}