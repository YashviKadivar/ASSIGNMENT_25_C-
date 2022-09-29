/* Define a class LargestNumber and define an instance member function to find the
    Largest of three Numbers using the class.   */

#include<iostream>
using namespace std;

class largest_num
{
    private:
        int x,y,z;
        int l;
    public:
        void set_data(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void cal(void)
        {
            if(x>y && x>z)
                l=x;
            else  if(y>x && y>z)
                l=y;
            else
                l=z;
        }

        void display_data()
        {
            cout<<x<<" , "<<y<<" , "<<z<<endl;
            cout<<"largest number -> "<<l<<endl;
            cout<<"-----------------------------"<<endl;
        }
};

int main()
{
    largest_num l1,l2;

    l1.set_data(12,34,88);
    l2.set_data(90,101,77);
    l1.cal();
    l2.cal();
    l1.display_data();
    l2.display_data();
}


