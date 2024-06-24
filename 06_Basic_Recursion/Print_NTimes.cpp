#include<bits/stdc++.h>
using namespace std;
 
void recurse(int n, string s)
{
    if(n==0)
        return;
    cout<<s<<endl;
    recurse(n-1,s);
}
void solve()
{
    int n; 
    string s; 
    cin>>n;
    getline(cin,s);
    recurse(n,s);
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