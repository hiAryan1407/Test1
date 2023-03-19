#include <iostream>
using namespace std;

void TowerofHanoi(int n, char from_rod, char aux_rod, char to_rod)
{
    if(n==0)
    {
        return;
    }
    TowerofHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod
         << " to rod " << to_rod << endl;
    TowerofHanoi(n - 1, aux_rod, to_rod, from_rod);
}

//Driver Code
int main()
{
    int N=3;
    // cout << "Number of discs"<<endl;
    // cin >> N;
    cout <<endl;
    TowerofHanoi(N, 'A', 'B', 'C');
    return 0;
}