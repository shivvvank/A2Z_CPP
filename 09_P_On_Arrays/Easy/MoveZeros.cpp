#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n; 
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> temp(n,0);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
            temp[j++]=v[i];
    }
    for(int i=0;i<n;i++)    cout<<temp[i]<<" ";
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