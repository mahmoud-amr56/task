#include <iostream>
using namespace std ;
int main()
{
    int a , b ;
    cin>>a >>b ;

    if (a % 2 == 1 && b % 2 == 1)
    cout<<a * b<<"\n";
    else if (a % 2 == 0 && b % 2 == 0)
    {
          if (b == 0)
            cout<<"PLEASE TRY AGAIN \n ";
            else
                cout<<a / b <<"\n";
}
        else if (a % 2 == 1 && b % 2 == 0)
            cout<<a + b;
        else if (a % 2 == 0 && b % 2 == 1)
            cout<<a - b;








}
