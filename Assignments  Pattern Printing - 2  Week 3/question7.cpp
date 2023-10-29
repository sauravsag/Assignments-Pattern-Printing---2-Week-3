#include<iostream>
using namespace std;
int main(){
    int n,m,a ;
    cout<<"number of rows = ";
    cin>>n;
    int nsp = n-1;
    int nsp1 = 1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout<<" ";
        }
        if (i<n) nsp--;
        else nsp++;
        cout<<"*";
        if (i>1 && i<(2*n-1))
        {
            for (int k = 1; k <= nsp1; k++)
            {
                cout<<" ";
            }
            if (i>1 && i<n) nsp1+=2;
            else nsp1-=2;
             cout<<"*";
        }
        
        cout<<endl;
    }
    
} 