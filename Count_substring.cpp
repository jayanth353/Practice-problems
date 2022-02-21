#include <bits/stdc++.h>
using namespace std;
string sub_(string inp,int i,int sr){
    string temp="";
    while(sr--)
    {
        temp+=inp[i++];
    }
    return temp;
}
int countSub(string inp,string sub){
    string Inp=inp;
    int lr=inp.length();
    int sr=sub.length();
    int count=0;
    for(int i=0;i<lr;i++){
        if(inp[i]==sub[0] && (i+sr-1)<lr){
            string temp = sub_(Inp,i,sub.length());
            if(temp==sub) count++;
        }
    }
    return count;
}

int main() {
 
    
    string inp,sub;
    cin>>inp>>sub;
    if(inp.length()<sub.length()) swap(inp,sub);
   
    cout<<countSub(inp,sub);
    return 0;
}
/*

banana
ana

//2



a
adamant
//3
*/
