#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p,q,r;
    int ct=0;
    while(t--)
    {
        cin>>p>>q>>r;
        if(p+q+r >=2)
        {
          ct++;
        }
        else continue;
    }
    cout<<ct;
    return 0;
} 