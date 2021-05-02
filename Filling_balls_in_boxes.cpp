/*Given n balls u have to fill the balls in the given boxes having specific capacity
box-1:can hold 64 balls
box-2:can hold 32 balls 
box-3:can hold 16 balls
box-4:can hold 8 balls
box-5:can hold 4 balls
box-6:can hold 2 balls
box-7:can hold 1 balls
your task is to Print the minimum number of boxes required
constrain:Each box should completley filled...!
ex:
input:185
output:
64's-2
32's-1
16's-1
8's-1
1's-1
Total:6
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r;
    cout<<"Enter n:";
	cin>>n;
	
	if(n>=64)
	{
        cout<<"64's-"<<n/64<<"\n";
		r+=n/64;
		n-=64*(n/64);
	}
	if(n>=32)
	{
        cout<<"32's-"<<n/32<<"\n";
		r+=n/32;
		n-=32*(n/32);
	}
   if(n>=16)
	{
       cout<<"16's-"<<n/16<<"\n";
		r+=n/16;
		n-=16*(n/16);
	}
    if(n>=8)
	{
        cout<<"8's-"<<n/8<<"\n";
		r+=n/8;
		n-=8*(n/8);
	}
	if(n>=4)
	{
        cout<<"4's-"<<n/4<<"\n";
		r+=n/4;
		n-=4*(n/4);
	}
	if(n>=2)
	{
        cout<<"2's-"<<n/2<<"\n";
		r+=n/2;
		n-=2*(n/2);
	}
	if(n>=1)
	{
        cout<<"1's-"<<n/1<<"\n";
		r+=n/1;
		n-=1*(n/1);
	}
	
	cout<<"Total:"<<r;
}
