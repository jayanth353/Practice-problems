/*Right rotaate 1 2 3 4 5 6 ->(2) -> 3 4 5 6 1 2*/
#include<stdio.h>
int main()
{
    int n,a[1000],t[100],i,j,k,l,temp;
    printf("Enter size:");

    scanf("%d",&n);
    printf("\n How many times you want to rotate");
    scanf("%d",&k);
    temp=k;
    l=n-k;
    printf("\n Enter that %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    //temp array
    for(i=0;i<k;i++)
    {
        t[i]=a[i];
    }
    //shifting values to front
    for(i=0;i<l;i++,k++)
    {
     a[i]=a[k];
    
    }
    //replacing last values with temp values
    for(int z=0;z<temp;i++,z++)
    {
      a[i]=t[z];
    }
    printf("\n Rotated array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
