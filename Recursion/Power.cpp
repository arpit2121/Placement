#include<iostream>
using namespace std;

int pow(int x, int n)
{
    if(n==0)
    return 1;
    return pow(x, n-1)*x;
}

int main()
{
    int x;
    int m;
    cin>>x;
    cin>>m;
    cout<<pow(x,m);

    return 0;
}