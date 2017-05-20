usigned int sequences_count;
   unsigned int queries;
   cin >> sequences_count >> queries;
   unsigned int** sequences {new unsigned int*[sequences_count]};
   for (unsigned int i {0}; i < sequences_count; ++i)
   {
       unsigned int length;
       cin >> length;
       
       sequences[i] = new unsigned int[length];
       
       for (unsigned int j {0}; j < length; ++j)
       {
           cin >> sequences[i][j];
       }
   }
   
   for (unsigned int i {0}; i < queries; ++i)
   {
       unsigned int sequence;
       unsigned int element;
       
       cin >> sequence >> element;
       
       cout << sequences[sequences][elements] << '\n';
   }
   
   for (unsigned int i {0}; i < sequences_count; ++i)
   { 
       delete[] sequences[i];
   }
   
   delete[] sequences;
   
   return 0;
}
