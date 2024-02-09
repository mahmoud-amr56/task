#include <iostream>
using namespace std ;
int main()
{
    int x , y {1};

    cin>>x ;

    while (x >= y)
    {
      int s_p = 1;
      while (y >= s_p)
      {
          cout<<'*';
          ++s_p ;
      }
      cout<<"\n";
      ++y ;

    }

}
