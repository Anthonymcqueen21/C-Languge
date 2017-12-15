class Person {
    public:
       virtual void getData() = 0;
       virtual void putData() = 0;
    protected:
       string name;
       unsigned int age;
};
class Professor: public Person {
   public:
         Professor():
            id {current_id++}
        {}
        void getdata()
        {
           cin >> name >> age >> publications;
        }
        
        void putdata()
        {
            cout << name << ' '
                 << age  << ' '
                 << publications << ' '
                 << id   << '\n';
        }
private:
      unsigned int publications;
      unsigned int id;
      
      static unsigned int current_id;
};

unsigned int Professor::current_id {1u}

class Student: public Person {
   public:
       Student():
          marks(6),
          id {current_id++}
   { }
   
   void getdata() {
   
         cin >> name >> age;
         
         for (auto& mark : marks)
         {
             cin >> mark;
         }
    }
    
    void putdata() {
         cout << name << ' '
              << age  << ' '
              << accumulate(marks.cbegin(),marks.cend(), 0u) << ' '
              << id   << '\n'
    }
private:

    vector<unsigned int> marks;
    unsigned int id;
    
    static unsigned int current_id;
};

unsigned int Student::current_id {1u};
