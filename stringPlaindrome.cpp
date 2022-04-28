#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1;
cin>>s1;

int len=s1.length();
int s=0,e=len-1,flag=1;
while(s<e)
{
    if(s1[s]!=s1[e])
    {
        flag=0;
        cout<<"not a pailndrome";
        break;
    }
    s++;
    e--;
}
if(flag==1)
cout<<"palindrome";

}