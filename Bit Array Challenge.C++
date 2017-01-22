// Four Integers N,S,P,Q use the order to create a sequence use the pseudo-code

a[0] = S (modulo 2 ^31)
for i = 1 to N-1
   a[i] = a[i-1]*P+Q (modulo 2 ^31)
   
   
Code: 

#include <iostream>
#include <vector>

using namespace std;

constexpr unsigned int modulo {lu << 31};

inline
void use_io_optimizations() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
}

int main() {
   
   use_io_optimizations();
   
   unsigned int length;
   unsigned int initial;
   unsigned int factor;
   unsigned int addend;
   
   cin >> length >> initial >> factor >> addend;
   
   unsigned int unique {1};
   unsigned long element {initial % modulo};
   
   vector<bool> is_used(modulo);
   is_used[element] = true;
   
   for (unsigned int i {1}; i < length; ++i) {
       
       element = (element * factor + addend) % modulo;
       
       if (!is_used[element])
       {
           ++unique;
           is_used[element] = true;
       }
   }
   
   cout << unique << '\n';
   
   return 0;
}

