#include<bits/stdc++.h>
using namespace std;
 
void revArr(vector<int> &arr, int n, int i)
{
    if(i>=n/2)
        return;
    int c = arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=c;
    revArr(arr,n,i+1);
}
void solve()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";
    cout<<endl;
    revArr(arr,n,0);
    for(int i=0;i<n;i++)    cout<<arr[i]<<" ";
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