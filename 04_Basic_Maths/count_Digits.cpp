#include<bits/stdc++.h>
using namespace std;
// Brute Force 
/*
void solve()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    cout<<count<<endl;
}
*/
// Better 
void solve()
{
    int n;
    cin>>n;
    cout<<(int)(log10(n)+1)<<endl;
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