#include<bits/stdc++.h>
using namespace std;
 
void SelectionSort(vector<int> &v,int n)
{
    for(int i=0;i<n;i++)
    {
        int minn_e=i;
        for(int j=i;j<n;j++)
        {
            if(v[j]<v[minn_e])
            {
                minn_e=j;
            }
        }
        int c = v[i];
        v[i]=v[minn_e];
        v[minn_e]=c;
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
    SelectionSort(v,n);
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