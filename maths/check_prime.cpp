#include<bits/stdc++.h>

using namespace std;

void check_prime(int n)
{
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cnt += 1;
        }
    
    }
    if(cnt<=2) cout<<n<<" is prime number";
    else cout<<n<<" is not a prime number";
    cout<<endl;
}

int main()
{
    int n;

    cin>>n;

    check_prime(n);
}