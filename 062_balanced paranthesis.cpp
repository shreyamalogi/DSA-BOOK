//author :shreyamalogi

//balanced paranthesis checker

//by using stack method

#include<bits/stdc++.h>
using namespace std;
bool cmp(char b,char c)
{

    if(b=='{' && c=='}')
        return true;
    else if(b=='[' && c==']')
        return true;
    else if(b=='(' && c==')')
        return true;
     return false;
}
bool ispar(string x)
{
    stack<char> s;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='[' || x[i]=='{' || x[i]=='(')
            s.push(x[i]);
        else if(x[i]==']' || x[i]=='}' || x[i]==')')
        {
            if(s.empty() || !cmp(s.top(),x[i]))
                return false;
            else
                s.pop();
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}
int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}

//
//2
//{([])}
//balanced
//([]
//not balanced

