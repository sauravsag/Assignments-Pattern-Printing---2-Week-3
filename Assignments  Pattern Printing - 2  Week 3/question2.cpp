#include <iostream>
using namespace std;
int main() {
int x,m;
cout<<"number of rows : ";
cin >> m;

for(int i = 1; i <= m; ++i) 
{
    x= 1;
    for (int j = 1; j <= m-i; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <= 2*i-1; k++)
    {
        cout<<(char)(x+64);
        x++;
    }
   cout << endl; 
}

}