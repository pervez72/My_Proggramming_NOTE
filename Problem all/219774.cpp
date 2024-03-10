#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int ar[n];
     if (n>=2 && n<=1000)
     {
        for (int i=0; i <n; i++)
        {
            cin>>ar[i];
            if (ar[i]>=-pow(10,5) && ar[i]<=pow(10,5))
            {
                ar[i]=ar[i];
            }
            
        }

        for (int i=0; i<n; i++)
        {
            if(ar[i]<0){
                cout<<"2"<<" ";
            }
            if(ar[i]==0){
               cout<<"0"<<" ";
            }
            if(ar[i]>0){
                cout<<"1"<<" ";
            }
        }
        
        
     }
     
}