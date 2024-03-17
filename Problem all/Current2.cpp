#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j;
    cin>>n;

    if(n>=1 && n<=pow(10,5)){

        long long a[n];
        for (int i = 0; i < n; i++)
        {
        cin>>a[i];
        if (a[i]>=1 && a[i]<=pow(10,9))
        {
            a[i]=a[i];
        }
         } //input done

        //reverse process

        for (i=n-1,j=0; i>=0; i--,j++)
        {
            a[j]=a[i];
        }
        for (int j= 0; j < n; j++)
        {
            cout<<a[j]<<" ";
        }
        
        







    }

}
