#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int Vasya = min(n, m);
    int Petya = n + m - 1 - Vasya;
    cout << Petya << " " << Vasya << endl;
    return 0;
}
