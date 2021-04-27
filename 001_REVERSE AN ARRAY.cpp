
//reverse an array without using STL
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;  //till how many u wanna print
 cin>>n;
 
   	int a[n],i;   
   	for(i=0; i<n; ++i)
   	cin>>a[i];
   	
   	 i=0;
	 int j=n-1; //swapING METHODS WILL TAKE TWO METHODS......first pointer will be at index 0 and second pointer will be pointing towards the last index
   	 while(i<j)  //i is pointing to first element, j is pointing to last
   	{
   		swap(a[i], a[j]);  //swaping first element last element, 2nd element second last etc
   		i++; //move first pointer forward
   		j--; //move last pointer backward
	}
	   
	   //finally print the array
	   for(i=0; i<n; ++i)
	   cout<<a[i]<<" "; 
	   
  	return 0;
  }
  
  //input
//5
//2 3 4 6 7

 //output
//7 6 4 3 2

