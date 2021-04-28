/*
    *
   *A*
  *A*A*
 *A*A*A*
*A*A*A*A*

*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n;
    for(i=1;i<=n;i++, k=0)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            if(k%2==0) printf("*");
            else printf("A");
            k++;
        }
        cout<<"\n";
    }
}
