#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    int ans=0;
    while(n!=0)
    {
        int d=n%10;
        if(d==key)
        ans++;

        n=n/10;
    }
    cout<<ans;
    return 0;
}