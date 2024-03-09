#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n,k=0,x,a;
    cin>>n;

    if(n>=1 && n<=pow(10,5)){
        int ar[n];
        for (long long i=0; i<n; i++)
        {

            cin>>ar[i]; 
            if (ar[i]>=0 && ar[i]<=pow(10,9))
            {
            ar[i]=ar[i];
            }
        }

        //input arry value section closed
        cin>>x;
        if(x>=0 && x<=pow(10,9)){ // x value checked
            for (long long i=0; i<n; i++)
            {   
                if(x==ar[i]){
                    a=i;
                    k++; 
                    break;
                }
            }
        
        if(k==0){
            cout<<"-1"<<"\n"; //when not exists
            }
        else
         cout<<a<<"\n"; //when exists 

        }
        
    }
}