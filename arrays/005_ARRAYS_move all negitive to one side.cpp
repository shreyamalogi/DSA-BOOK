//author :shreyamalogi

/*
move all negitive to one side nad and all positive to other side

if we suse brute force: 
approach 1: sorting then tc will be more o(n logn) and space will be o(1) cuz we dont need extra space
approach 2: take 2 arrays one array for +ve and other for -ve but tc will be o(n+n) and sc: o(n) cuz we use extra space for N and p
approach 3 optimized: quick sort approach by using partition algo
						pivot element means 0
						i pointer will throw all eleemenst
						keep updating i ki value if there is positive element
approach 4 optimized: two pointer approach						
*/


//partition
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int a[n], i;
  for(i=0; i<n; i++)
     cin>>a[i];
     
    int j=0;              //take extra pointer j and initialize it with 0 (pivot)
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

