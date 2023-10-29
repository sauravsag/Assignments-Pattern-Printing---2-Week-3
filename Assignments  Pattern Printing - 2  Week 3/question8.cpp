#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of rows = ";
    cin>>n;
    int nsp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        cout<<i;
        if (n>0)
        {
            for (int k =1 ; k <=i-1 ; k++)
        {
            cout<<" ";
        }
        }
        
    if (i>1)
    {
        cout<<i;
    }
    
        
        cout<<endl;
    }
    
} 