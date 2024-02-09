#include <iostream>
using namespace std ;
int main()
{
   int num , x1 , x2 , x3 , x4 , x5 ;
   cin>>num >> x1 >> x2 >> x3 >> x4 >> x5 ;
   int cnt {0};

   cnt += (num >= x1);
    cnt += (num >= x2);
     cnt += (num >= x3);
      cnt += (num >= x4);
       cnt += (num >= x5);

       cout<<cnt<<"\n" ;
       cout<<5 - cnt ;






}
