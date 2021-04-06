/*left rotate 1 2 3 4 5 6 ->(2) -> 5 6 1 2 3 4  */
#include<stdio.h>
int main()
{
    int n,a[1000],t[100],i,j,k,l,temp,temp0;
     printf("Enter array size:");
    scanf("%d",&n);
   
    printf("\n Enter that %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); 
    printf("\n How many times do you want to rotate");
    scanf("%d",&k);
    temp0=n;
    temp=k;
    
    l=n-k;
    //reading array
    
    //storing array values in temp array
    for(i=0;i<k;i++,temp--)
    {
        t[i]=a[temp0-temp];
    }
    //arranging array values
    for(j=0;j<l;j++,i++)
    {
        t[i]=a[j];
        
        
    }
  
    //printing array
    for(i=0;i<n;i++)
        printf(" %d ",t[i]);
}
