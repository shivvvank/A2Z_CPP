#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)  cout<<i<<" "<<n/i<<" ";
    }
    cout<<endl;
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