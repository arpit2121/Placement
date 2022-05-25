#include<iostream>
using namespace std;

int fun(int n)
{
    if(n==1) return 1;
    else
    return fun(n-1)+n;
}

int main()
{
    int n;
    cout<<"Enter a value for n : ";
    cin>>n;
    cout<<fun(n)<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int fun(int n)
// {
//     int i, sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         sum+=i;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout<<"enter the value for n : ";
//     cin>>n;
//     cout<<fun(n);
//     return 0;
// }