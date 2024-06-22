#include<iostream>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
                cout<<j;
            else
                cout<<" ";
        }
        for(int j=n;j>=1;j--)
        {
            if(j<=i)
                cout<<j;
            else
                cout<<" ";
        }
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