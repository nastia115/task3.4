Задача Matrix7.
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
int const n = 6;
const int m = 6;
int k = 2;
int arr[10][10];
srand(time(0));
for (int i = 0; i < n; i++)
{
for (int j = 0; j < m; j++)
{
arr[i][j] = rand() % 5 + 1;
cout << arr[i][j]<< " ";
}
cout << endl;
}
cout << endl << endl;
for (int i = 0; i < n; i++)
{
if (i = k-1)
for (int j = 0; j < m; j++)
{
cout << arr[i][j] << " ";
}
cout << endl;
break;
}
}
