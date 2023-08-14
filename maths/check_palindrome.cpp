#include<bits/stdc++.h>

using namespace std;

void check_palindrome(int n)
{
    int check_num = n;
    int rev_num = 0;
    while(n>0)
    {
        int last_dig = n % 10;
        rev_num = (rev_num*10)+last_dig;
        n=n/10;
    }
    if(check_num == rev_num) cout<<"True"<<endl;
    else cout<< "False"<<endl;
}

int main()
{
    int n;

    cin>>n;

    check_palindrome(n);
}