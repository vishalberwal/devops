#include<bits/stdc++.h>
using namespace std;

int Hcf(int a,int b)
{
    
    while(a%b!=0)
    { 
        int rem=a%b;
        a=b;
        b=rem;
     
    }
    // cout<<b;
    return b;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int gcd=Hcf(n1,n2);
    int lcm=(n1*n2)/gcd;
    cout<<gcd<<" ";
    cout<<lcm;
    
    return 0;
}