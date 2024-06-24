#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    int f = 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"Not Prime"<<endl;
    else
        cout<<"Prime Number"<<endl;
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