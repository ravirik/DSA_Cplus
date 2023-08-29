#include<bits/stdc++.h>

using namespace std;

void gcd_hcf_2(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b)  a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<b<<endl;
    else cout<<a<<endl;
}

int main()
{
    int a;

    int b;
    
    cin>>a>>b;

    gcd_hcf_2(a,b);

}

// TC ( Time Complexity ) = O( logϕ(min(a,b)))