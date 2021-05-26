//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{ 
   // we need n, k and arr
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n],i;
	for(i=0; i<n; i++)
	cin>>a[i];
	
	//lets sort to get min and max
	
	sort(a,a+n);
	
	int small=a[0]+k;
	int big=a[n-1]-k;
	
	//swap it
	if(small>big)
	swap(small,big);
	
	//run a loop from 1 to n-1
	for(i=1;i<n-1;i++)
	{
		int sub=a[i]-k;
		int add=a[i]+k;
		
		if(sub>=small || add<=big)
			continue; //then do ntg
		
		else if(big-sub<=add-small)	
			small=sub;
			
		else
			big=add;	
		
		}
		
		//print
		cout<<min(big-small, a[n-1]-a[0]); //if there is no operatipon then ultimately min-max
	
     return 0;
}

//4
//2
//1 5 8 10
//
//5


// nav the rabbit

// int getMinDiff(int arr[], int n, int k) {
// sort(arr, arr+n);
// int mn{},mx{},ans=arr[n-1]-arr[0];
// for(int i=1;i<n;i++){
// if(arr[i]>=k){
// mx=max(arr[i-1]+k,arr[n-1]-k);
// mn=min(arr[0]+k,arr[i]-k);
// ans=min(ans,mx-mn);
// }
// }
// return ans;

