#include<iostream>
using namespace std;
int main()
{
    int n,m,ct=0;
    cin>>n>>m;
    while(n<=m)
    {
        n=3*n;
        m=2*m;
        ct++; 
    }cout<<ct;
    return 0;
}