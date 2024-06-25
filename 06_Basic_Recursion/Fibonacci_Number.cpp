#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    int x = fib(n-1)+fib(n-2);
    return x;
}
void solve()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
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