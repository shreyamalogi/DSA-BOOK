//author :shreyamalogi
//move all negitive elements to one side

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int a[n], i;
  for(i=0; i<n; i++)
     cin>>a[i];
     
    int j=0;              //take extra pointer j and initialize it with 0
	for(i=0; i<n; i++)   //scan/traverse through the array
	{
		if(a[i]<0)      //if we find a negitive element
		{
			swap(a[i],a[j]);  //we will swap it with a[j]
			j++;              //and will increment j
		}
	}
	
	//print the output
	for(i=0; i<n; i++)
	cout<<a[i]<<" ";
	
  return 0;
  }
  
//  5
//2 -1 5 -4 -3
//-1 -4 -3 2 5

