#include <iostream>
using namespace std;
int main() {
int n,m;
cout<<"number of rows : ";
cin >> n;
for (int i = 1; i <= n; i++)
{
    int m =2;
    for (int j = 1; j <=n-i ; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <=i ; k++)
    {
        cout<<(char)(64+(i-k+1));
    }
    for (int l = 1; l <= i-1; l++)
    {
        cout<<(char)(m+64);
        m++;
    }
    
    cout<<endl;
}


}