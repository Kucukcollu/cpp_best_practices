#include <iostream>

class Point2D
{
    public:
        Point2D(float x, float y) : x_(x), y_(y) {}

        // no need
        // ~Point2D(){}

        void PrintPointCoordinates()
        {
            std::cout << "X: " << x_ << " Y: " << y_ << std::endl;
        }
    private:
        float x_;
        float y_;
};

int main()
{
    Point2D point_2d_{5.4, 4.2};
    point_2d_.PrintPointCoordinates();

    return 0;
}