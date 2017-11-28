int main() {
  use_io_optimizations();
  unsigned int lower;
  unsigned int upper;
  cin >> lower >> upper;
  for (unsigned int i {lower}; i <= upper; ++i) {
     if (i <= 9)
     {
        cout << in_words[i - 1];
     }
     else
     { 
        cout << (i % 2 ? "odd" : "even");
     }
     
     cout << '\n';
  }
  
  return 0;
}
