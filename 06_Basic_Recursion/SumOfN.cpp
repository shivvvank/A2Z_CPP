#include<bits/stdc++.h>
using namespace std;
 

int sumofN(int n)
{
    if(n==0)
        return 0;
    return n+sumofN(n-1);
}
void solve()
{
   int n;
   cin>>n;
   cout<<sumofN(n)<<endl;
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