#include<bits/stdc++.h>

using namespace std;

void pattern5(int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            cout <<"* "<<' ';
        }
        cout << endl;
    }
}

int main()
{
    int n = 10;

    pattern5(n);

    return 0;
}