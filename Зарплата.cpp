#include <iostream>

using namespace std;

long long a, b, c, max_n, min_n;

int main()
{
    cin >> a >> b >> c;
 if (a > b) {
     max_n = a;
     min_n = b;
 } else {
     max_n = b;
     min_n = a;
 } if (max_n < c) {
     max_n = c;
 } if (min_n > c) {
     min_n = c;
 }
     cout <<max_n - min_n;
 return 0; 
}
