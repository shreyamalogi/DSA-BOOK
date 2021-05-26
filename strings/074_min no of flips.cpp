//author :shreyamalogi

/*

implimentation : flip every 1 with 0 and 0 with 1
take the min 

*/


#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    
	    int count1=0; //toggle 1
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(s[i]!='1')
	            {
	                count1++;
	            }
	        }
	        else
	        {
	            if(s[i]!='0')
	            {
	                count1++;
	            }
	        }
	        
	    }
	    
	    int count2=0; //toggle 2
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(s[i]!='0')
	            {
	                count2++;
	            }
	        }
	        else
	        {
	            if(s[i]!='1')
	            {
	                count2++;
	            }
	        }
	        
	    }
	    cout<<min(count1,count2)<<endl;
	}
	return 0;
}


//2
//001
//1
//0001010111
//2
