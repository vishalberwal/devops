#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<1;
        return 0;
    }
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;

    }
    cout<<fact;

    return 0;
}