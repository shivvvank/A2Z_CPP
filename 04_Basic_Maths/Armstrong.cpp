#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n ;
    cin>>n;
    int m=n;
    int numDig = log10(n)+1, arm=0;
    while(n>0)
    {
        arm=arm+pow(n%10,numDig);
        n/=10;
    }
    if(arm==m)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"Not Armstrong Number"<<endl;
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
