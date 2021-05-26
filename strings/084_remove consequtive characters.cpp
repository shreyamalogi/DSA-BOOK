//author :shreyamalogi

/*

recursively remove all the duplicates or
Remove Consecutive Characters 

im using 2 pointer approach 

*/


#include<bits/stdc++.h>
using namespace std;

void removeduplicate(string s)
{
    if(s.length()<2)
        cout<<s<<endl;
        
    else
    {
        int i,j=0;
        for(i=1;i<s.length();++i)
        {
            if(s[j]!=s[i])
            {
                j++;
                s[j]=s[i];
            }
        }
        
        cout<<s.substr(0,j+1)<<endl;
    }
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    removeduplicate(s);
	}
	return 0;
}


//1
//aabb
//ab
