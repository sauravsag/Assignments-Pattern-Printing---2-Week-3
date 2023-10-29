#include <iostream>
using namespace std;
int main() {
int n,x,m;
cout<<"number of rows : ";
cin >> n;
m=n-1;

for(int i = 1; i <= m; ++i) 
{
    x= 1;
    for (int j = 1; j <= m-i; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <= 2*i-1; k++)
    {
        cout<<x;
        x++;
    }
   cout << endl; 
}

}

    
