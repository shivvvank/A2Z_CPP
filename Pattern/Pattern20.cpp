/*

*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *

*/
#include<iostream>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)   cout<<"*";
        for(int j=0;j<2*(n-1-i);j++)    cout<<" ";
        for(int j=0;j<=i;j++)   cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-1-i);j++)   cout<<"*";
        for(int j=0;j<2*(i+1);j++)    cout<<" ";
        for(int j=0;j<(n-i-1);j++)   cout<<"*";
        cout<<endl;
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