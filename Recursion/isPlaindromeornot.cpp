#include<iostream>
using namespace std;

bool isPalindromeHelper(int l, int r,string &s)
{
    if(l>r) return true;
    if(s[l]!=s[r]) return false;
    return isPalindromeHelper(l+1, r-1,s);

}
bool isPalindrome(string &s)
{
    return isPalindromeHelper(0, s.length(), s);
}
int main()
{
    string s;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}