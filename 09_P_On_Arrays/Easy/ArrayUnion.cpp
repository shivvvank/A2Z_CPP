#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n1,n2;
    cin>>n1;
    vector<int> v1(n1,0),v2(n2,0),vfinal(n1+n2,0);
    for(int i=0;i<n1;i++)    
        cin>>v1[i];
    cin>>n2;
    for(int i=0;i<n2;i++)    
        cin>>v2[i];
    int i=0, j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(v1[i]<=v2[j])
        {
            vfinal[k++]=v1[i++];
        }
        else
        {
            vfinal[k++]=v2[j++];
        }
    }
    while(i<n1)
        vfinal[k++]=v1[i++];
    while(j<n2)
        vfinal[k++]=v2[j++];
    for(int i=0;i<n1+n2;i++) cout<<vfinal[i]<<" ";
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
