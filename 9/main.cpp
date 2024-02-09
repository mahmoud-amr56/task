#include <iostream>
using namespace std ;
int main ()
{
    int n , y {0};
    cin>>n ;

    while(n >= y)
    {
        if (y % 8 == 0 || y % 3 ==0 && y % 4 == 0)
            cout<<y<<" " ;



        ++y;
    }
    return 0;
}

