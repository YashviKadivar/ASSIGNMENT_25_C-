/* Define a class Factorial and define an instance member function to find the Factorial
    of a number using class.    */

#include<iostream>
using namespace std;

class factorial
{
    private:
        int fact;
        int number;
    public:
        factorial()
        {
            fact=1;
        }
        void set_data(int f)
        {
            number=f;
            cal();
        }
        void cal(void)
        {
            for(int i=1;i<=number;i++)
            {
                fact=fact*i;
            }
        }
        int get_data(void)
        {
            return number;
        }
        int get_fact(void)
        {
            return fact;
        }
};

int main()
{
    factorial f1,f2;

    f1.set_data(5);
    f2.set_data(6);
    cout<<"Factorial of "<<f1.get_data()<<" is "<<f1.get_fact()<<endl;
    cout<<"Factorial of "<<f2.get_data()<<" is "<<f2.get_fact()<<endl;
}
