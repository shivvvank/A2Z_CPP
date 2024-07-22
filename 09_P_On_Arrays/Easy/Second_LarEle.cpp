#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int max1 = -1e9;
    int max2 = -1e9;
    int n; 
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(max1<v[i])
        {
            if(max1>max2)
                max2 = max1; 
            max1 = v[i];
        }
    }
    cout<<max2<<endl;
}
 // Temp commit is on the way 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();
    return 0;
}