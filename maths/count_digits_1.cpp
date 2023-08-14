#include<bits/stdc++.h>

using namespace std;

void count_digits_1(int n)
{
    int count_dig = (int) (log10(n)+1);
    cout<<count_dig;
}

int main()
{
    int t;

    cin>>t;

    for (int i=0; i<t; i++)
    {
        int n;

        cin>>n;

        count_digits_1(n);
    }
}