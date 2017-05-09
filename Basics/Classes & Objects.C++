class Student
{
public:
    void input()
    {
        for (int i {0}; i < 5; ++i)
        {
            int score;
            cin >> score;
            
            total_score += score;
        }
    }
    int calculateTotalScore() const
    {
        return total_score;
    }
   private:

    int total_score = 0;
};
