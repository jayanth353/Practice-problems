#include <bits/stdc++.h>
using namespace std;
/*No of digits can be calulated as
k=floor(log10(n))+1*
where k is no.of digits and n is given number
This prgm can count upto 308 digits with O(1)*/
//Compiler version g++ 6.3.0
double log_value(double l)
{
    return log10(l);
}
int main()
{
    double n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"NO.of Digits in n are:"<<floor(log_value(n))+1;
    
}
