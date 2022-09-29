/* Define a class Rectangle and define an instance member function to find the area of
    the rectangle.  */

#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int width;
        int height;
        int area;

    public:
        void set_data(int w,int h)
        {
            width=w;
            height=h;
        }

        void cal(void)
        {
            area=(width*height);
        }

        void get_area()
        {
            cout<<"--------------------------"<<endl;
            cout<<"height : "<<height<<endl;
            cout<<"width  : "<<width<<endl;
            cout<<"area   : "<<area<<endl;

        }
};

int main()
{
    Rectangle r1,r2;

    r1.set_data(10,30);
    r2.set_data(5,20);

    r1.cal();
    r2.cal();

    r1.get_area();
    r2.get_area();
}
