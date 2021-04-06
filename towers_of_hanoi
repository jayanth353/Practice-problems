#include<stdio.h>
#include<conio.h>
int main()
{
  void hanoi(int,char,char,char);
  int n;
  printf("Enter the no.of disks to be moved:");
  scanf("%d",&n);
  hanoi(n,'A','C','B');
  getch();
}
void hanoi(int n,char from,char to,char mid)
{
  if(n==1) 
  {
  printf("\n Move %d disk from %c to %c",n,from,to);
 return;
  }
  hanoi(n-1,from,mid,to);
  printf("\n Move %d disk from %c to %c",n,from,to);
  hanoi(n-1,mid,to,from);
}
