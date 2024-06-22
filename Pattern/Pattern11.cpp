#include<iostream>
using namespace std;
 
void solve()
{
    int n ; 
    cin>>n;
    int bit = 1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            bit = 1;
            for(int j=0;j<=i;j++)
            {
                cout<<bit;
                bit = bit==0?1:0;
            }
        }
        else 
        {
            bit = 0;
            for(int j=0;j<=i;j++)
            {
                cout<<bit;
                bit = bit==0?1:0;
            }
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