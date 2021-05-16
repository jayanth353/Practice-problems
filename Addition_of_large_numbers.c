#include <stdio.h>
#include<string.h>
void cal(char*p1,char*p2,char *s1,char *s2,int min,int max)
{
	char res[1000],str2[1000];
	int b;
    int c=0,l=0;
	for(int i=0;i<min;i++)
	{
		int sum=((p1[i]-'0')+(p2[i]-'0')+c);
		res[l]=sum%10+'0';
		l++;
		c=sum/10;
	}
	for(int i=min;i<max;i++)
	{
		int sum=((p2[i]-'0')+c);
		res[l]=sum%10+'0';
		l++;
		c=sum/10;
	}
	if(c)
	{
		res[l]=c+'0';
		l++;
	}
	res[l]='\0';
    printf(" %s",s2);
    printf("\n+");
    for(int k=0;k<max-min;k++)
    printf(" ");
    printf("%s\n ",s1);
    for(int j=0;j<max;j++)
    printf("-");
    printf("\n ");
    for(int j=l-1;j>=0;j--)
    {
        printf("%c",res[j]);
    }

}
int main(){
	        			
	
	
		int n1=0,n2=0,max=0,min=0,carry=0,i=0,r=0;
		char s1[100],s2[100],str1[100],str2[100],res[100],a,b;
        printf("Enter two numbers to add:\n");
		scanf("%s %s",s1,s2);
        //find length of the strings
		for(n1=0;s1[n1]!='\0';n1++);
		for(n2=0;s2[n2]!='\0';n2++);
		
        //reversing s1
	    for(i=n1-1,a=0;i>=0;i--,a++)
		{
             str1[a]=s1[i];

		}
		str1[a]='\0';
        //reversing s2
		for(i=n2-1,b=0;i>=0;i--,b++)
		{
             str2[b]=s2[i];

		}
		str2[b]='\0';
       if(n1>=n2) cal(str2,str1,s2,s1,n2,n1);
	   else cal(str1,str2,s1,s2,n1,n2);
	 
}
