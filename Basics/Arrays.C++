#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n;
    // Scanner class
    scanf("%d",&n);
    vector<int>v(n);
    for(int i=0;i<n;i++)scanf("%d",&v[n-i-1]);
    for(int i=0;i<n;i++)printf(i<n-1?"%d ":"%d\n",v[i]);
    return 0;
}
