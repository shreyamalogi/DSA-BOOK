//author :shreyamalogi

/*

rearrange charecters in a string such that no two charects are the same
step1: calculate freq of all chareters in a hash array
srep2: keep and store the variable get the max frequency
if(2*maxfreq<=s.length()+1) 
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
		
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int i,maxfreq=0;
	    int freq[26]; //hash array 26 alphabets
	    memset(freq,0,sizeof(freq));
	    
	    for(i=0;i<s.length();++i)
	    {
	        freq[s[i]-'a']++;
	        maxfreq=max(maxfreq,freq[s[i]-'a']);
	    }
	    
	    if(2*maxfreq<=s.length()+1) //if this condition satisfies we can always rearrange it
	        cout<<1<<endl;
	        
	    else
	      cout<<0<<endl;
	    
	}

     return 0;
}
//
//3
//geeksforgeeks
//1
//bbbabaaacd
//1
//bbbb
//0

