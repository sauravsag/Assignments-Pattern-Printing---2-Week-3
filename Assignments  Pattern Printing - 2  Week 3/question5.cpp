#include<iostream>
using namespace std;
int main(){
    int n,m,a ;
    cout<<"number of rows = ";
    cin>>n;
    for (int j = 1; j <= 2*n-1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    m = n-1;
    
    for (int i = 1; i <= m; i++)
    {
         a = 0;
        for (int j = 1; j <= m-i+1; j++)
        {
             a++;
            cout<<a;
           
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
        
        }
        for (int l = 1; l <= m-i+1; l++)
        {
             cout<<a;
            a--;
        }
        
        
        cout<<endl;
    }
} 