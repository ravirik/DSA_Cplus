#include<bits/stdc++.h>

using namespace std;

int print_numbersum_functional(int n)
{
    if (n < 1) return 0;
    return n + print_numbersum_functional(n - 1);
}

int main()
{
    int n;
    cin>>n;
    cout << print_numbersum_functional(n) << endl;

    return 0;
}
