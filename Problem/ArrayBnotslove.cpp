#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n,k=0,m=0,x;
    cin>>n;
    if(n>=1 && n<=pow(10,5)){
        int ar[n];
        for (long long i=0; i<n; i++)
        {
            cin>>ar[i];

            if(ar[i]>=0 && ar[i]<=pow(10,9)){   
                ar[i]=ar[i];
            }
           
        }
        int a=ar[0];
        cin>>x;
        if(x>=0 && x<=pow(10,9)){

            for (long long i = 0; i <n; i++)
        {   
            
              if(x==ar[i]){
                k++;
                break;
              }

            //   if (x==ar[0])
            //   {
            //     m++;
            //     break;
            //   }
              
        }
        }
        if(a==x){
            cout<<"0"<<"\n";
        }
        //check part equal and not equal
        else if(k==0){   
            cout<<"-1"<<"\n"; //when not exists
        }
        else
            cout<<"1"<<"\n"; //when exists 
}
}