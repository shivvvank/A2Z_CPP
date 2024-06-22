/*

**********
*        *
*        *
*        *
*        *
*        *
*        *
*        *
*        *
**********

*/

#include<iostream>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
            for(int j=0;j<n;j++)    cout<<"*"; 
            cout<<endl;  
        }
        else
        {
            cout<<"*";
            for(int j=0;j<n-2;j++)  cout<<" ";
            cout<<"*";
            cout<<endl;
        }
    }
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