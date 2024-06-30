#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
        int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)    cin>>v[i];
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";
    cout<<endl;
    int c = v[n-1];
    for(int i=n-1;i>0;i--)
    {
        v[i]=v[i-1];
    }
    v[0]=c;
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";
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