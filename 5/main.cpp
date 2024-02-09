#include <iostream>
using namespace std;
int main ()
{
   int x , y , z ;
   cout<<"Enter the numbers : ";
   cin>>x >>y >>z ;

   if (x > y && z > y && x > z)
        cout<<y <<" "<<z<<" "<<x;
   else if (x > z && y > z && x > y)
    cout<<z <<" "<<y<<" "<<x;
   else if (y > x && z > x && y > z)
    cout<<x<<" "<<z<<" "<<y;
   else if (x > y && z > y && z > x)
   cout<<y<<" "<<x<<" "<<z;
   else if(x > z && y > z && y > x)
    cout<<z<<" "<<x<<" "<<y;
    else if (y > x && z > x && z > y)
    cout<<x<<" "<<y<<" "<<z;





}
