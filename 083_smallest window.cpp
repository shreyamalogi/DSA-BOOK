//author :shreyamalogi

/*

Smallest window in a string containing all the 
characters of another string 

sliding window approach

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s,s1;
	    cin>>s>>s1;
	    long int i,beg=0,end=0,ansstart=0,len=INT_MAX;
	    
	    unordered_map<char,long int> m;
	    
	    for(i=0;i<s1.length();++i)
	       m[s1[i]]++;
	      
	     long int window=s1.length();  
	    while(end<s.length())
	    { 
	         if(m[s[end]]>0)
	            window--;
	            
	            m[s[end]]--;
	            
	            end++;
	            
	            while(window==0)
	             {
	                 if(len>end-beg)
	                  {
	                      len=end-beg;
	                      ansstart=beg;
	                  }
	                  
	                   m[s[beg]]++;
	                  if(m[s[beg]]>0)
	                     window++;
	                     
	                  
	                   beg++;
	             }
	        
	    }
	  if(len!=INT_MAX)  
	    cout<<s.substr(ansstart,len)<<endl;
	    
	  else
	    cout<<-1<<endl;
	    
	}
	return 0;
}

