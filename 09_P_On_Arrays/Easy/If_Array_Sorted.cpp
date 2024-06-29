#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    int f = 0;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]>v[i])
            f=1;
    }
    if(f==1)
        cout<<"Not sorted"<<endl;
    else
        cout<<"sorted"<<endl;
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

// 1 2 4 3 5