#include<bits/stdc++.h>
using namespace std;
 
void InsertionSort(vector<int> &v,int n)
{
    for(int i=0;i<n;i++)
    {
        int j = i;
        while(j>0 && v[j-1]>v[j])
        {
            v[j]=v[j]+v[j-1];
            v[j-1]=v[j]-v[j-1];
            v[j]=v[j]-v[j-1];
            j--;
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
    InsertionSort(v,n);
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