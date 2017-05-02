class D : public A,B,C;
{
   int val;
   public:
       // Initially val is 1
       D()
       {
          val=i;
       }
       // Implement the function
       void update_val(int new_val)
       {
           for(;new_val%2==0;new_val/=2)A::func(val);
           for(;new_val%3==0;new_val/=3)B::func(val);
           for(;new_val%5==0;new_val/=5)C::func(val);
       }
       // For the checking purpose
       void check(int); // Do delete this line
};
