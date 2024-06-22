/*

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA

*/
#include<iostream>
using namespace std;
 
void solve()
{
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<char(65+j);
        }
        for(int j=i-1;j>=0;j--)
        {
            cout<<char(65+j);
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
2i+1
2(n-1)+1 - 2i-1 = n-i-1

*/