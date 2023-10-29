#include<iostream>
using namespace std;
int main(){
    int n,m,a ;
    cout<<"number of rows = ";
    cin>>n;
    for (int j = 1; j <= 2*n-1; j++)
        {
            cout<<(char)(j+64);
        }
        cout<<endl;
    m = n-1;
    
    for (int i = 1; i <= m; i++)
    {
         a = 1;
        for (int j = 1; j <= m-i+1; j++)
        {
            cout<<(char)(64+a);
            a++;
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
            a++;
        }
        for (int l = 1; l <= m-i+1; l++)
        {
             cout<<(char)(64+a);
            a++;
        }
        
        
        cout<<endl;
    }
}   