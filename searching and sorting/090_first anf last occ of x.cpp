//author :shreyamalogi

/*

Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences
 of an element x in the given array.
 
 use binary search algo to get optimized resulyt
 TC:  o(log n)

*/

#include<bits/stdc++.h>
using namespace std;

//FIRST OCC
int first(int a[], int l, int h, int x, int n)
{
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if ((mid == 0 || x > a[mid - 1]) && a[mid] == x) //IMP
            return mid;
            
        else if (a[mid]<x)
            l=mid+1;
            
        else
            h=mid-1;
    }
    return -1;
}

//LAST OCC
int last(int a[], int l, int h, int x, int n)
{
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if ((mid == n - 1 || x < a[mid + 1]) && a[mid] == x) //IMP
            return mid;
            
        else if (a[mid]>x)
            h=mid-1;
            
        else
            l=mid+1;
    }
    return -1;
}


int main() {
	
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n],i;
	    for(i=0;i<n;++i)
	        cin>>a[i];
	    
	    if(first(a,0,n-1,x,n)==-1)
	       cout<<-1<<endl;
	   
	   else    
	    cout<<first(a,0,n-1,x,n)<<" "<<last(a,0,n-1,x,n)<<endl;     
	        
	         
	}
	
	return 0;
}

//
//1
//9 5
//1 3 5 5 5 5 67 123 125
//2 5


//Explanation: First occurrence of 5 is at index 2 and last
//             occurrence of 5 is at index 5. 
