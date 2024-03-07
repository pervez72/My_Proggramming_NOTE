#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k=0,sum=0;
    cin>>t;
    if (t>=1 && t<=10)
    {
       while(t--) //test case 
    {
        int r;
        cin >> n;
        if (n >= 1 && n <= pow(2, 31) - 1)
        {
            while (n != 0)
            {
                r = n % 2;
                if (r == 1)
                {
                    sum=sum+pow(2, k);
                    k++;
                }
                n = n/2;
            }
            cout << sum << endl;
        }
    }
    sum=0;
    k=0; 
    }
    
    
    
}