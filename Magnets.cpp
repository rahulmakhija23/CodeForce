#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int br=0,n;
    int max=0;
    if(t==2){max=2;exit;}
    while(t--)
    {
    cin>>n;
        if(n==10){br++;}
        else 
            {      
            if(br>max || br==max){max=br;br=0;}            
            }     
    }
      if(br>max){max=br;}
    cout<<max;
    return 0;
}