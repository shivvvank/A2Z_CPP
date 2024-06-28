#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int> &v,int low, int mid, int high)
{
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=high)
    {
        if(v[left]<=v[right])
            temp.push_back(v[left++]);
        else
            temp.push_back(v[right++]);
    }
    while(left<=mid)
    {
        temp.push_back(v[left++]);
    }
    while(right<=high)
    {
        temp.push_back(v[right++]);
    }
    for(int i=low;i<=high;i++)
    {
        v[i]=temp[i-low];
    }
}
void MergeSort(vector<int> &v, int low, int high)
{
    if(low>=high)
        return;
    int mid = (low+high)/2;
    MergeSort(v,low,mid);
    MergeSort(v,mid+1,high);
    Merge(v,low,mid,high);
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)    cin>>v[i];
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";
    cout<<endl;
    MergeSort(v,0,n-1);
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