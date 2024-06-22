#include<iostream>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";   
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
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

/*

0 -> 1
1 -> 3 
2 -> 5 
3 -> 7
4 -> 9
5 -> 11 
2*i+1
(2*n+1)-(2*i+1)
(n-i) | 2*i+1 | (n-i)

2*i+1 + n-i + n-i -> 2n+1
*/