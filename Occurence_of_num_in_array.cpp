/*
!!!!!!!!!!!!!this example is an application of binary search!!!!!!
Description - Given a sorted array arr[ ] and a number x, We have to count the occurrences of x in arr[ ].
Input : [1, 1, 2, 2, 2, 2, 3] , x = 2
Output : 4
*/
/*
Solution: Binary Search We can solve this problem using binary search by reducing the effective search space in each step. We will be using these steps -
1.Use Binary search to get the index of the first occurrence of x in arr[ ]. Let the index of the first occurrence be i.
2.Use Binary search to get the index of the last occurrence of x in arr[ ]. Let the index of the last occurrence be j.
3.Return the count as difference between first and last indices (j – i + 1);
*/
#include<iostream>
using namespace std;
int first_occurrence(int a[],int l,int h,int occn,int n) //oocn --Number that is repeated
{
    
    if(h>=l)
    {
        
        int mid=(l+h)/2;
        if((mid==0 || a[mid-1]<occn) && a[mid]==occn) return mid; //if (mid is first location or mid-1 th element is less than occn) with mid th element is occn
        else if(occn >a[mid]) return first_occurrence(a,mid+1,h,occn,n);
        else return first_occurrence(a,l,mid-1,occn,n);
    }
}
int last_occurrence(int a[],int l,int h,int occn,int n) //oocn --Number that is repeated
{
    if(h>=l)
    {
        
        int mid=(l+h)/2;
        if((mid==n-1 || a[mid+1]> occn) && a[mid]==occn) return mid;
        else if(occn<a[mid]) return last_occurrence(a,l,mid-1,occn,n);
        else return last_occurrence(a,mid+1,h,occn,n);
    }
}
int main()
{
    int a[1000],n,occn;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array with repeated elements:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the number to find its occurence:";
    cin>>occn;
    int f=first_occurrence(a,0,n-1,occn,n);
    int l=last_occurrence(a,0,n-1,occn,n);
    cout<<"\'"<<occn<<"\'"<<" repeated "<<l-f+1<<" times in given array";
}
