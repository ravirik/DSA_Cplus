#include<bits/stdc++.h>

using namespace std;

void check_prime_1(int n)
{
    int cnt = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i== 0)
        {
            cnt++;
            if(n/i != i)
            {
                cnt++;
            }
        }

    }
    if (cnt <= 2) cout<<n<<" is a prime number";
    else cout<<n<<" is not a prime number";
    cout<<endl;
}

int main()
{
    int n;

    cin>>n;

    check_prime_1(n);
}