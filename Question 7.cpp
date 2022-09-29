/* Define a class Greatest and define instance member function to find Largest among
    3 numbers using classes.    */

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
            else    if(y>x && y>z)
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

    l1.set_data(90,1254,6);
    l2.set_data(11,89,333);

    l1.cal();
    l2.cal();

    l1.display_data();
    l2.display_data();
}
