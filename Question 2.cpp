/* Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
    number of instance member variables and also define instance member functions to
    set values for time and display values of time. */

#include<iostream>
using namespace std;

class time
{
    private:
        int hr;
        int min;
        int sec;

    public:
        void set_time(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
        void display_time(void)
        {
            cout<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
        }
};

int main()
{
    time t1,t2;

    t1.set_time(12,5,45);
    t2.set_time(1,26,12);
    t1.display_time();
    t2.display_time();

    return 0;
}
