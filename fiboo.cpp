#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=1;
    cin>>n;
    while(n!=0)
    {
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
        n--;
    }
    return 0;
}