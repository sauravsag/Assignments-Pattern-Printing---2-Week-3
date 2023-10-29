#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp = 1;
    int nsp1 = n-2;
    int nsp2 = n-2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<" ";
        }
       cout<<"*"; 
       if (i>2)
       {
        for (int k = 1; k <= nsp; k++)
        {
            cout<<" ";
        }
        nsp++;
       }
       if (i>1) cout<<"*";
       if (n>2)
       {
        for (int l = 1; l <= i-2; l++)
        {
           cout<<" ";
        }
        if (i>1) cout<<"*";
       }
        cout<<endl;
    }
    for (int z = 1; z <= 2*n+1; z++)
    {
        cout<<"*";
    }
    
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
       cout<<"*"; 
        if (i<= n-2)
        {
            for (int k = 1; k <= nsp1; k++)
            {
                cout<<" ";
            }
          nsp1--;  
        }
        if (i<= n-1) cout<<"*"; 
        if (i<= n-2)
        {
            for (int k = 1; k <= nsp2; k++)
            {
                cout<<" ";
            }
          nsp2--;  
        }
        if (i<= n-1) cout<<"*";
       cout<<endl; 
    }
    
}