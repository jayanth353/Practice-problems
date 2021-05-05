/*
 


Step:1) 1.1)Create an array ‘a[]’ of MAX size where MAX is number of maximum digits in output.
        Ex: In 100! we have 150+ digits hence it would be better if u define MAX as 160
        1.2) Initialize value stored in ‘a[0]’ as 1 and initialize ‘a_size’ (size of ‘a[]’) as 1. 
step:2.1) Do following for all numbers from x = 2 to n. 
     2.2)Multiply x with a[] and update a[] and res_size to store the multiplication result.
How to multiply a number ‘x’ with the number stored in a[]? 
The idea is to use simple school mathematics. We one by one multiply x with every digit of a[]. 
The important point to note here is digits are multiplied from rightmost digit to leftmost digit. 
If we store digits in same order in res[], then it becomes difficult to update res[] without extra space. 
That is why res[] is maintained in reverse way, i.e., digits from right to left are stored.
Step:3)multiply(a[], x) 
3.1) Initialize carry as 0. 
3.2) Do following for i = 0 to a_size – 1 
….a) Find value of a[i] * x + carry. Let this value be prod. 
….b) Update a[i] by storing last digit of prod in it. 
….c) Update carry by storing remaining digits in carry. 
3.3) Put all digits of carry in a[] and increase a_size by number of digits in carry.


*/
#include<iostream>
using namespace std;
#define MAX 160 //Increase MAX if u want to calculate larger numbers //Step 1.1
int multiply(int a[],int l,int s)
{
    int carry=0;//step 3.1
    for(int i=0;i<s;i++)
    {//Step 3.2
        int prod=a[i]*l+carry;
        a[i]=prod%10;
        carry=prod/10;
    }
    while(carry)//step 3.3
    {
        a[s]=carry%10;
        s++;
        carry=carry/10;
    }
    return s;
}
void fact(int n) 
{
    
        int a[500];//Step 1.2
        a[0]=1;
        int curr_size=1;
    for(int i=2;i<=n;i++)//step 2.1
    {
        curr_size=multiply(a,i,curr_size); //step 2.2
    }
    for(int i=curr_size-1;i>=0;i--)
        cout<<a[i];
}

    int main()
{ 
      
        int n;
        cout<<"Enter a number";
        cin>>n;
        cout<<n<<"!=";
        if(n==0 || n==1) cout<<1;
        else fact(n);
}
