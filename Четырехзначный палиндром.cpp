#include <iostream>

using namespace std;

int n, first_1, last_1, f_2, l_2;

int main()
{
    cin >> n;
    first_1 = n % 10;
    n = n / 10;
    f_2 = n % 10;
    n = n / 10;
    last_1 = n % 10;
    n = n / 10;
    l_2 = n;
    cout << (( (f_2 == last_1) && (first_1 == l_2) )? "YES" : "NO");
 return 0; 
}