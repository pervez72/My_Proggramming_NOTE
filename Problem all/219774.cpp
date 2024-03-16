#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j;
    cin>>n;
    if (n>=1 && n<=1000)
    {
         long long a[n],b[n];
        for (i=0; i<n; i++)
        {
           cin>>a[i];
           if(a[i]>=0 && a[i]<=pow(10,9)){
            a[i]=a[i]; //input a
           }
        }

        for (i=n-1,j=0; i>=0; i--,j++)
        {
         b[j]=a[i];
        }
        
        for (j=0; j<n; j++)
        {
         
         cout<<b[j];
         if(j!=n-1){
            cout<<" ";
         }
        }
        
}
}