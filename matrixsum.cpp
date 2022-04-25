#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    srand(time(NULL));
    const int N = 2;
    int mtrx[N] = {-1, 1};
    cout << "Razmer matrix: ";
    cin >> n;