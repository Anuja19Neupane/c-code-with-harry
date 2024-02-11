#include <iostream>

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no=a;
        }

        void print_number(void)
        {
            std::cout << "Your roll no. is : " << roll_no << std:: endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void)
        {
            std:: cout << "Your result is here :" << std::endl
                        << "Maths: " << maths << std::endl
                        << "Physics: " << physics << std::endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score=sc;
        }
        void print_score(void){
            std:: cout << "Your PT score is " << score << std::endl;
        }
};

class Result : public Test, public Sports{
    private: 
        float total;
    public: 
        void display(void)
        {
            total=maths+physics+score;
            print_number();
            print_marks();
            print_score();
        }
};

int main() {

    Result anuja;
    anuja.set_number(340);
    anuja.set_marks(34.3,78.78);
    anuja.set_score(29);
    anuja.display();
    


    return 0;
}