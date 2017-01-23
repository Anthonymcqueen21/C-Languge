// StringStreams are used in C++ as a class to operate on strings it shows the inputs and output operations
    on memory based stream programs.
//

Code:

#include <iostream>
using namespace std;

inline
    void use_io_optimizations()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    use_io_optimizations();
    
    for(int number; cin >> number; )
       {
        cout << number << '\n';
        
        char delimiter;
        cin >> delimiter;
    }
    
    return 0;
}
