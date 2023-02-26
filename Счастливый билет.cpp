#include <iostream>

using namespace std;

long long n, first_3, last_3;

int main()
{
 cin >> n;
 last_3 = n % 10;
 n = n / 10;
 last_3 = last_3 + n % 10;
 n = n / 10;
 last_3 = last_3 + n % 10;
 n = n / 10;
 first_3 = n % 10;
 n = n / 10;
 first_3 = first_3 + n % 10;
 n = n / 10;
 first_3 = first_3 + n % 10;
 
 if (first_3 == last_3) cout << "YES";
 else cout << "NO";
 return 0; 
}
