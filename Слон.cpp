#include <iostream>

using namespace std;

int x1, x2, y, y2;

int main()
{
    cin >> x1 >> y;
    cin >> x2 >> y2;
    if ( abs(x1 - x2) == abs(y - y2) )
    {
        cout << "YES"; 
    }
    else 
    { 
        cout << "NO";
    }
 return 0; 
}