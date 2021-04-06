#include<stdio.h>
#include<conio.h>
int main()
{
  long int fact(int);
 long  int n,r,x,y,z,result;
    printf("!!!!!!!!NOTE:n should be greater than r i.e n>=r!!!!!!!!!!!!");
  printf("\n n and r values of C(n,r):");
  scanf("%ld %ld",&n,&r);
  x=fact(n);
  y=fact(n-r);
  z=fact(r);
  result=x/(y*z);
  printf("no.of combinations=%ld",result);
  getch();
}
long int fact(int n)
{
  if(n==0) return 1;
  
   if(n==1) return(1);
    else return(n*fact(n-1));
}
