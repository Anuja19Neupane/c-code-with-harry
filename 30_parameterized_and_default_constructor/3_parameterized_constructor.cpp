// distance between two points
#include <iostream>
#include <cmath>

class Point
{
    int x, y;

public:
    Point(int a, int b) // parameterized constructor
    {
        x = a;
        y = b;
    }
    friend int distance(Point p1, Point p2);
    void display_point()
    {
        std::cout << "The point is (" << x << "," << y << ")" << std::endl;
    }
};
int distance(Point p1 , Point p2)
{
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    int distance= sqrt(pow(x_diff,2)+pow(y_diff,2));
    std:: cout << "The distance is: " << distance << std::endl;
    return distance;
}

int main()
{
    Point p (1,1);// object
    Point q (2,3); // object
    distance(p,q);

    Point c(2,3);
    Point d(1,3);
    distance(c,d);
    

    return 0;
}