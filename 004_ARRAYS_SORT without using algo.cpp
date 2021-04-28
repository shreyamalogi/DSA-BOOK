//author :shreyamalogi
// given an array which cosists of only 0,1 and 2, sort the array without using any sorting algo

//so we will keep 3 variables which counts occurence of 1 2 and 3
//time complexity O(n) because we will be counting how many ones how many twos ....will be there and then fill the array accordingly

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int a[n],i;
  for(i=0; i<n; i++)
    cin>>a[i];
    
   // we need 3 variables for counting 0 1 and 2
   int c0=0, c1=0, c2=0; 
   
   for(i=0; i<n; i++)
   {
   	
   	if (a[i]==0)
   	c0++;
   	
   	else if(a[i]==1)
   	c1++;
   	
   	else
   	c2++;
   	
   }
   
   //first we will fill c0 then c1 thn c2 so 3 for loops
   for(i=0; i<c0; i++)
   a[i]=0;
   
   for(i=0; i<c0+c1; i++)
   a[1]=1;
   
   while(c2--)
   {
   	 a[i++]=2;
   }
   
   //finally print the result
   for(i=0; i<n; i++)
   cout<<a[i]<<" ";
  return 0;
  }

