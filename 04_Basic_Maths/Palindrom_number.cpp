#include<iostream>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    int m = n;
    int rev = 0;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev == m)
        cout<<"Palindrome"<<endl;
    else 
        cout<<"Not a palindrome"<<endl;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();
    return 0;
}