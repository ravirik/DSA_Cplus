#include<bits/stdc++.h>

using namespace std;

void gcd_hcf(int n1,int n2)
{
    int gcf=1;
    for(int i=1; i<=min(n1,n2); i++)
    {
        if(n1%i== 0 && n2%i==0)
        {
            gcf=i;
        }
    }
    cout<<gcf;
    cout<<endl;
}

int main()
{
    int n1;

    int n2;

    cin>>n1>>n2;

    gcd_hcf(n1,n2);
}