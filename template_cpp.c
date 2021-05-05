#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
template <class j>
j   sum(j a,j b)
{
  return(a+b);
}


int main()
{
    cout << "sum 2+3="<<sum(2,3);
    cout << "\nsum 1.1+2.2="<<sum(1.1,2.2);
}
