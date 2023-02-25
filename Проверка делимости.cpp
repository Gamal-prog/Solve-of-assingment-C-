#include <iostream>

using namespace std;

int a, b;

int main()
{
 cin >> a >> b;
 cout << (max(a,b) % min(a,b))+ 1;
 return 0; 
}