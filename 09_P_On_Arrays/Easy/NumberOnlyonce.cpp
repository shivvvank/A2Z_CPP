#include<bits/stdc++.h>
using namespace std;
 
// void solve()
// {
//     int n; 
//     cin>>n;
//     vector<int> v(n,0);
//     for(int i = 0;i<n;i++)  cin>>v[i];
    
//     map<int, int> m;
//     for(int i=0;i<n;i++)
//     {
//         m[v[i]]++;
//     }
//     for(auto i : m)
//     {
//         if(i.second == 1)
//             cout<<i.first<<endl;
//     }
// }

void solve()
{
    int n; 
    cin>>n;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++)  cin>>v[i];

    int ans = 0;
    for(auto i : v)
        ans^=i;
    cout<<ans<<endl; 
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