#include <iostream>

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student :: get_roll_number()
{
    std:: cout << "The roll number is " << roll_number << std:: endl;
}


class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam:: set_marks(float m1,float m2)
{
    maths = m1;
    physics = m2;
}

void Exam :: get_marks ()
{
    std:: cout << "The marks obtained in maths is: " << maths << std:: endl;
    std:: cout << "The marks obtained in physics is: " << physics << std:: endl;

}

class Result : public Exam{
    float percentage;
    public:
        void display_result ()
        {
            get_roll_number();
            get_marks();
            std:: cout << "Your percentage is " << (maths + physics)/2 << "%" << std:: endl;
        }
};

int main()
{
    Result anuja ;
    anuja.set_roll_number(7);
    anuja.set_marks(45,34);
    anuja.display_result();
    return 0;
}