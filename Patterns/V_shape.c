/*1                   21
 2                 20 
  3               19  
   4             18   
    5           17    
     6         16     
      7       15      
       8     14       
        9   13        
         10 12         
          11  

*/
#include <iostream>

using namespace std;

//Compiler version g++ 6.3m.0

int main()
{
  int n;
    cout<<"Enter any odd number:";
  cin>>n;
  int m=n/2;
  for(int i=0;i<=m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j) cout<<i+1;
      else if(i+j==(n-1)) cout<<j+1;
      else cout<<" ";
      
    }
    cout<<"\n";
  }
}



