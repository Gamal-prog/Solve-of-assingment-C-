#include <iostream>

using namespace std;

int a, b, team_1, team_2;

int main()
{
    cin >> a >> b;
    team_1 = a;
    team_2 = b;
    
    cin >> a >> b;
    team_1 = team_1 + a;
    team_2 = team_2 + b;
    
    cin >> a >> b;
    team_1 = team_1 + a;
    team_2 = team_2 + b;
    
    cin >> a >> b;
    team_1 = team_1 + a;
    team_2 = team_2 + b;
    if (team_1 > team_2) cout << 1;
    if (team_1 < team_2) cout << 2;
    if (team_1 == team_2) cout << "DRAW";
 return 0; 
}
