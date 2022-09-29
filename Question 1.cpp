/* Define a class Complex to represent a complex number. Declare instance member
    variables to store real and imaginary part of a complex number, also define instance
    member functions to set values of complex number and print values of complex
    number  */

#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        int img;
    public:
        void set_data(int r,int i)
        {
            real=r;
            img=i;
        }
        void display_data(void)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main()
{
    complex c1,c2;
    c1.set_data(3,2);
    c2.set_data(5,3);
    c1.display_data();
    c2.display_data();

    return 0;
}
