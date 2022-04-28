#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
   
    while(true)
    {
        
    char n;
    cin>>n;
    if(n=='x')
    break;
    sum=(sum+(int)n)-48;
    
    }
    cout<<sum;
    return 0;
}