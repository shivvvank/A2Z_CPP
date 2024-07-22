#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n ;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)    cin>>v[i];
    int gmax=0, lmax=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            lmax++;
            gmax = max(gmax,lmax);
        }
        else
        {
            lmax=0;
        }
    }
    cout<<gmax<<endl;
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