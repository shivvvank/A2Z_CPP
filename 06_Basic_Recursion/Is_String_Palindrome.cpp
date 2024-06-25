#include<bits/stdc++.h>
using namespace std;
 
bool revStr(string &s, int n, int i)
{
    if(i>=n/2)
        return true;
    if(s[i]!=s[n-1-i])
        return false; 
    else 
        return revStr(s,n,i+1);
}
void solve()
{
    string s;
    getline(cin, s);
    if(revStr(s,s.length(),0))
        cout<<"Palindrome"<<endl;
    else   
        cout<<"Not a palindrome"<<endl;
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