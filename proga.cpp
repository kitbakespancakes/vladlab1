#include <iostream>
using namespace std;
int main()
{
    int d = 1;
    int X[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {          
            X[i][j] = d; 
            cout<<X[i][j];
            cout<<" ";
            d++;
        }
 
        cout<<endl;
    } 
    return 0;
}