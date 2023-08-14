#include<bits/stdc++.h>

using namespace std;

void reverse_num(long int n)
{
    long int rev_num = 0;
    while(n>0)
    {
        long int last_digs = n % 10;
        rev_num = (rev_num*10)+last_digs;
        n = n / 10;
    }
    cout<<rev_num<<endl;
}

int main()
    {
        long int n = 12345678912346579;
        reverse_num(n);
    }
