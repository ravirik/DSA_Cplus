#include<bits/stdc++.h>

using namespace std;

int print_factorial(int n)
{
    if (n<1) 
    {
        return 1;
    }
    return n*print_factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << print_factorial(n) << endl;
    return 0;
}