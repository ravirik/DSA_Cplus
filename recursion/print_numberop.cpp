#include<bits/stdc++.h>

using namespace std;

void print_numberop(int n)
{
    if(n<1) return;
    
    cout<<n<<endl;
    print_numberop(n-1);
}

int main()
{
    int t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        print_numberop(n);
    }
    return 0;
}