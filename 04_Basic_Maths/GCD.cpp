#include<iostream>
using namespace std;
/*
brute force
void solve()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=min(n1,n2);i>0;i--)
    {
        if(n1%i==0&&n2%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    cout<<1<<endl;
}
Recursion
*/
int gcd(int n1, int n2)
{
    if(n2==0)
        return n1;
    return gcd(n2,n1%n2);
}
void solve ()
{
    int n1, n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2)<<endl;
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