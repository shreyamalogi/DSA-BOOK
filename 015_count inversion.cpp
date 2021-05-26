//author :shreyamalogi

/*

basically batana hai ki hamara ye jo array hai kitna dur hai isko sort hone se
so i<j and ai<=aj

in an array of 5 4 1 2 3
the inversions are : (5,4) (5,1) (5,2) (5,3)
					(4,1) (4,2) (4,3)
total inversions are 7

*/


//brute force: ek element ko pakad aur last tk jaa
// int count=0;
// for(int i=0;i<n;i++){ 		//0 to n
// 	for(int j=i+1;j<n;j++){ 	//i+1 to n
// 		if(a[i]>a[j]) 			//strictly greater
// 			count++;
// 	}
// }
// cout<<count;  
//tc: o(n^2)
//sc: o(1)



//OPTIMIZED
//merge sort approach
//divide and conquer algo which takes n(logn) time


#include<bits/stdc++.h>

using namespace std;

long long int ans=0;    //answer will be our global variable

void merge(long long int a[], long long int l, long long int m, long long int r)//merge function take 4 parameters
{
	int i,j,k;       //we need 3 variables
	int n1= m-l+1;  //as we are splitting array into 2, n1 and n2
	int n2= r-m;     //will be the sizes of the array
	
	long long int L[n1], R[n2];  //left subarray with n1 size and right subarray with n2 size
	
	//run 2 loops
	
	for(int i=0;i<n1;i++) L[i]=a[i+1];
	for(int i=0;i<n2;i++) R[j]=a[i+m+1];
	
	//let us equate 
	i=0; j=0; k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k++]=L[i++];
		}
		else
		{
			//imp step/ extra line (if left subarray is greater than the right subarray
			// then there will be n-1 inversion or we have to store the count everytime
			ans+=n1-i; 	
			a[k++]=R[j++];
		}
	}
	
	while(i<n1)
	a[k++]=L[i++];
	
	while(j<n2)
	a[k++]=R[j++];
	
}

void mergesort(long long int a[], long long int l, long long int r)	// merge sort function req 3 parameters - an array, lower bound ,upper bound
{
	if(l<r)
	{
		long long int mid= l+(r-1)/2 ;  //mid, to avoid integer overflow
		mergesort(a,l,mid);   
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);   		 //final merge 
	}
}
int main()

{
	long long int n;
	cin>>n;
	long long int a[n],i;
	for(int i=0;i<n;i++) cin>>a[i];
		
	mergesort(a,0,n-1);
		
	cout<<ans<<endl;
	
    return 0;
}

//
//5
//2 4 1 3 5

//output 3 
