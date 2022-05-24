// #include<iostream>
// using namespace std;

// int fact(int n)
// {
//     if(n==0 || n==1)
//     return 1;
//     else
//     return fact(n-1)*n;
// }

// int main()
// {
//     int n;
//     cout<<"enter the value for n : ";
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }

#include<iostream>
using namespace std;

int fact(int n)
{
    int i,  f =1;
    for(i = 1 ; i<= n ;i++)
    {
        f = f*i;
    }
    return f;
}

int main()
{
    int n;
    cout<<"enter the value for n : ";
    cin>>n;
    cout<<fact(n);
    return 0;
}