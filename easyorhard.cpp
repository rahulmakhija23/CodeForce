#include<iostream>
using namespace std;
int main()
{
 int t,n;
 cin>>t;
 string s="";
 while(t--)
 {
cin>>n;
if(n==0){s="EASY";}
else {
s="HARD";
break;
}

 }
 cout<<s;
    return 0;
}