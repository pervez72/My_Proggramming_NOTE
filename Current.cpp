#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,min,index;
    cin>>n;
    if (n>=2 && n<=1000)
    {
        int a[n];
        for (int i=0; i<n; i++)
        {
           cin>>a[i];
           if(a[i]>=-pow(10,5) && a[i]<=pow(10,5)){
            a[i]=a[i];
           }
        }
        
        min=a[0];
        int index=0;
        for (int i=0; i<n; i++)
        {
           if(a[i]<min){
            min=a[i];
            index=i;
           }
        }
      
        cout<<min<<" "<<index+1;  
 }
}