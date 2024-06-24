#include<bits/stdc++.h>
using namespace std;

void printr(int n)
{
    if(n==0)
        return;
    printr(n-1);
    cout<<n<<endl;
}
void solve()
{
    int n;
    cin>>n;
    printr(n);
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