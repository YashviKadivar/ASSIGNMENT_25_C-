/* Define a class ReverseNumber and define an instance member function to find
    Reverse of a Number using class.    */

#include<iostream>
using namespace std;

class ReverseNumber
{
    private:
        int number;
        int rev_num;

    public:
        ReverseNumber()
        {
            number=0;
            rev_num=0;
        }

        void set_data(int n)
        {
            number=n;
        }

        void cal(void)
        {
            int nn=number;
            while(nn)
            {
                rev_num=(rev_num*10)+nn%10;
                nn/=10;
            }
        }

        int get_number(void)
        {
            return number;
        }

        int get_rev_num(void)
        {
            return rev_num;
        }
};

int main()
{
    ReverseNumber r1,r2;

    r1.set_data(567);
    r2.set_data(345);

    r1.cal();
    r2.cal();

    cout<<r1.get_number()<<" reverse -> "<<r1.get_rev_num()<<endl;
    cout<<r2.get_number()<<" reverse -> "<<r2.get_rev_num()<<endl;
}
