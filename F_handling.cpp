#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

void tables(int times)
{
    if(times != 1)
    {
        times--;
        tables(times);

    }
    cout<<2*times<<endl;
}
int main()
{
enum weak{sunday =1,monday,tusday,whensday,thirsday,friday,saterday};
weak w1 = sunday;
if (w1 == 1)
{
     cout<<"you are off"<<endl;
}
int times = 20;
tables(times);
_getch();
}
