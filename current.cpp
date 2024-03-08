#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n,k=0,m=0;
    cin>>n;
    if(n>=1 && n<=pow(10,5)){
        int ar[n];
        for (long long  i=0; i <n; i++)
        {
            cin>>ar[i];

            if(ar[i]>=0 && ar[i]<=pow(10,9)){   
                ar[i]=ar[i];
            }
           
        }
        long long x;
        cin>>x;
        if(x>=0 && x<=pow(10,9)){

            for (long long i = 0; i <n; i++)
        {
              if(x==ar[i]){
                k++;
                break;
              }
              if (x==ar[0])
              {
                m++;
                break;
              }
              
        }
        }
        
        if(k==0){
            cout<<"-1";
        }
        else if(m==1){
            cout<<"0";
        }
        else
            cout<<"1";
    
        
}
}