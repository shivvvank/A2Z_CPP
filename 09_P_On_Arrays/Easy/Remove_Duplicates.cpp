#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int last = 0,cur=1;
    while(cur<n)
    {
        if(v[cur]==v[last])
        {
            cur++;
        }
        else
        {
            v[last+1] = v[cur++];
            last++;
        }
    }
    vector<int> temp;
    for(int i=0;i<=last;i++)
    {
        temp.push_back(v[i]);
    }
    for(int i =0;i<=last;i++)
    {
        cout<<temp[i]<<" ";
    }
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