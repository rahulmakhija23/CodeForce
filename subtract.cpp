#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    while(t--)
    {
        if(n%10==0) n=n/10;
        else n--;
    }
cout<<n;
    return 0;
}