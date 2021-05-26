
//maximum and minimum element
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   
   int a[n],i;
   for(int i=0; i<n; i++)
   	cin>>a[i];
   	
   	int mn = INT_MAX, mx=INT_MIN; //SET min to INT_MAX and max to INT_MIN
   	
   	//minimum
   	for(i=0; i<n; i++)
   	{
   		if(mn>a[i]) //if minimum is greater than a[i]
   		   mn=a[i]; //then minimum is equal to a[i]
	   }
	 //maximum  
	for(i=0; i<n; i++)
   	{
   		if(mx<a[i])
   		   mx=a[i];
	   }   
	 
	 //finally print minimum and maximum  
	 cout<<mn<<" "<<mx<<endl;
   	
   
  return 0;
  }
  
  
   //input
//5
//3 4 5 1 2

   //output
//1 5

