#include <iostream>

using namespace std;

int n;

long long b;

int main()
{
 cin >> n;
 b = n % 10;
 n = n / 10;
 b = b + n % 10;
 n = n / 10;
 b = b + n;
 cout << b;
 return 0; 
}
