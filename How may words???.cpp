#include<bits/stdc++.h>
using namespace std;
int valid(string temp)
{
    for(int i=0;i<temp.length();i++)
        {
            if(isalpha(temp[i]) || temp[i]=='?' || temp[i]=='-' ||  temp[i]=='.' ||  temp[i]==',') continue;
            else return 0;
        }
        cout<<temp<<"\n";
     return 1;
}
int count(vector<string> sen)
{
    int count=0;
    for(int i=0;i<sen.size();i++)
    {
        if(valid(sen[i])) count++;
    }
    return count;
}
int main()
{
    char s[100];
    vector<string> v ;
    scanf("%[^\n]s",s);
    char *tok=strtok(s," ");
    while(tok!=NULL)
    {
        v.push_back(tok);
        tok=strtok(NULL," ");
    }
    cout<<count(v);
}
