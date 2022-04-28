#include<bits/stdc++.h>
using namespace std;
// taking input till user enter the 0 , and printing the max no. among them
int main()
{
    int maxi=INT_MIN;
    while(true)
    {   int n;
        cin>>n;
        if(n==0)
        break;
        maxi=max(maxi,n);
    }
    cout<<maxi;
    return 0;
}