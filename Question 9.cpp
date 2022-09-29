/* Define a class Circle and define an instance member function to find the area of the
    circle.     */

#include<iostream>
using namespace std;

class Circle
{
    private:
        int red;
        float area;
    public:
        void set_data(int r)
        {
            red=r;
        }

        void cal()
        {
            area=3.14*red*red;
        }

        void get_data()
        {
            cout<<"Radius -> "<<red<<endl;
            cout<<"Area -> "<<area<<endl;
        }
};

// float Circle::pi=3.14;

int main()
{
    Circle c1,c2;

    c1.set_data(10);
    c2.set_data(2);

    c1.cal();
    c2.cal();

    c1.get_data();
    c2.get_data();

    return 0;
}
