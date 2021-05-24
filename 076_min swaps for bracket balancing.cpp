//author :shreyamalogi

/*



*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    string s;
	    cin>>s;

        long int i,bracket=0; //take bracket variable
        long int count=0;

        for(i=0;i<n;i++)
        {
             
            if(s[i]==']') //whenever i got bracket i did --
                 bracket--;
                 
            else if(bracket<0) //bracket no less than 0 that means that many no of swaps i have to do
             {
                count+=abs(bracket); //add absolute value of this brackt value to the count variable and bracket ++
                bracket++;
             }
             
            else
               bracket++; //if it is an opening bracket
           
        }
        
       cout<<count<<endl;
	    
	}
     return 0;
}

//1
//[[][]]
//0

