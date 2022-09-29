/* Define a class Area and define instance member functions to find the area of the
    different shapes like square, rectangle , circle etc.   */

#include<iostream>
using namespace std;

class Area
{
    private:
        float width,height,side,radious;

    public:
        void set_side(float s)
        {
            side=s;
        }

        void set_radious(float r)
        {
            radious=r;
        }

        void set_width_height(float w,float h)
        {
            width=w;
            height=h;
        }

        float area_circle()
        {
            return (3.14*radious*radious);
        }

        float area_Rectangle()
        {
            return (width*height);
        }

        float area_square()
        {
            return (side*side);
        }
};

int main()
{
    Area a1,a2;

    a1.set_side(10);
    a1.set_radious(10);

    cout<<"area of square -> "<<a1.area_square()<<endl;
    cout<<"area of circle -> "<<a1.area_circle()<<endl;

    return 0;
}
