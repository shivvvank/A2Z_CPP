#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    int maxx=-1e9;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(maxx<v[i])
            maxx=v[i];
    }
    cout<<maxx<<endl;
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