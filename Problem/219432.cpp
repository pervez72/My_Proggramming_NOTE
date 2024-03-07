#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,t,k=0,sum=0;
    cin>>t;
    while (t--)
    {
        int r;
       cin>>n;
       if (n>=1 && n<=pow(2,31)-1)
       {
        while (n!=0)
        {
        r=n%2;
        n=n/2;
        if(r==1){
            sum=sum+pow(2,k);
            k++;
        }
        
        }
       }
       k=0;
       cout<<sum<<endl;
       
    } 

  }