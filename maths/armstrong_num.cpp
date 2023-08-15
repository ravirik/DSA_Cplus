#include<bits/stdc++.h>

#include <cmath>

using namespace std;

void armstrong_num(int n)
{
    int sum = 0;
    int count = (log10(n)+1);
    int num = n;
    while(n>0)
    {
        int last_dig = n%10;
        sum = sum+ pow(last_dig,count);
        n=n/10;
        
    }
    if( num == sum ) cout<<"True"<<endl;
    else cout<<"False"<<endl;
}

int main()
{
    int n;

    cin>>n;

    armstrong_num(n);
}