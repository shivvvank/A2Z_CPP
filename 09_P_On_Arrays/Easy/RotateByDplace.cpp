#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,d;
    cin >> n>>d;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)    cin>>v[i];
    if(d==0)
        return;
    vector<int> vt(d,0);
    for(int i = 0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(int i=0;i<d;i++)
    {
        vt[i]=v[i];
    }
    for(int i=0;i<n-d;i++)
    {
        v[i]=v[i+d];
    }
    for(int i=0;i<d;i++)
    {
        v[n-d+i]=vt[i];
    }
    for(int i = 0;i<n;i++)
        cout<<v[i]<<" ";
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