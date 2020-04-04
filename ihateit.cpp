#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=1;
    while(i<=t){
        if(i!=1){cout<<" that";}
        if(i%2==0 && i>0){cout<<" I love";}
        else{cout<<" I hate";}
        i++;
    }
    cout<<" it";
    return 0;
}