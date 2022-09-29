/* Define a class Square to find the square of a number and write a C++ program to
    Count number of times a function is called. */

#include<iostream>
using namespace std;

class square
{
    private:
        int number;
        int squ;
        static int count;
    public:
        void set_number(int n)
        {
            number=n;
        }

        void cal_squ(void)
        {
            squ=number*number;
            square::count++;
        }

        int get_number()
        {
            return number;
        }

        int get_square()
        {
            return squ;
        }

        static void count_cal()
        {
            cout<<square::count<<endl;
        }
};
int square::count=0;

int main()
{
    square s1,s2;

    s1.set_number(8);
    s2.set_number(15);

    s1.cal_squ();
    s2.cal_squ();

    cout<<s1.get_number()<<" -> "<<s1.get_square()<<endl;
    cout<<s2.get_number()<<" -> "<<s2.get_square()<<endl;

    square::count_cal();
}
