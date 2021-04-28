/*
*##############*
**############**
***##########***
****########****
*****######*****
******####******
*******##*******
****************

*/
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    for(int j=0;j<=i;j++)
    cout<<'*';
    for(int k=0;k<(t-i-1)*2;k++)
    cout<<'#';
    for(int j=0;j<=i;j++)
    cout<<'*';
    cout<<"\n";
  }
}
