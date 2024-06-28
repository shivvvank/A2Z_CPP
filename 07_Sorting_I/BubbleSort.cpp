#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &v,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                v[j]=v[j]+v[j+1];
                v[j+1] = v[j]-v[j+1];
                v[j] = v[j]-v[j+1];
            }
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)    cin>>v[i];
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";
    cout<<endl;
    BubbleSort(v,n);
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";
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