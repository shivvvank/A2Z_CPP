#include<bits/stdc++.h>
using namespace std;
//lowest 
// void solve()
// {
//     int n,minn=1e9;
//     cin>>n;
//     vector<int> v(n,0);
//     unordered_map<int,int> m;
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//         m[v[i]]++;
//         if(m[v[i]]<minn)
//             minn = m[v[i]];
//     }
//     cout<<minn<<endl;
// }
//highest 
void solve()
{
    int n,maxx=0, maxx_e=-1;
    cin>>n;
    vector<int> v(n,0);
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
        if(m[v[i]]>maxx)
        {
            maxx = m[v[i]];
            maxx_e = v[i];
        }
    }
    cout<<"Element : "<<maxx_e<<", frequency : "<<maxx<<endl;
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