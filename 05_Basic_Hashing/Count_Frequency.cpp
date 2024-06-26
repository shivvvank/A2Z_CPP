#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    unordered_map<int, int> m;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
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