#include<bits/stdc++.h>

using namespace std;

void print_factorial_procedural(int i, int cnt =1)
{
    if(i<1)
    {
        cout<<cnt<<endl;
        return;
    }
    print_factorial_procedural(i-1,cnt*i);
}

int main()
{
    int n;
    cin>>n;
    print_factorial_procedural(n);

    return 0;
}