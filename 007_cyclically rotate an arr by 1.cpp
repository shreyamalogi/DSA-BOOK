//author :shreyamalogi

//cycling rotate an array by one

/*

//right sift ulta
void shift(int arr[], int n){
	int temp = arr[n-1];
	for(int i=n-1; i>0; i--)	 //n-1 to 0
		arr[i]=arr[i-1]]	 //eg: 4th index me 3rd index ki value....
		arr[0]=temp;		 //and 0th inedx me apan temp ki value store karenge	
}
//left shift
void shift(int arr[], int n){
	int temp = arr[0];
	for(int i=0; i<n-1; i++) 	//0 to n-1
		arr[i]=arr[i+1]] 	//eg: 4th index me 3rd index ki value....
		arr[n-1]=temp; 		//and 0th inedx me apan temp ki value store karenge	
}


*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--){
     int n;
     cin>>n;
     
     int a[n], i;
     for(i=0; i<n; ++i)
     cin>>a[i];
     
     int last =a[n-1];
     
     for(i=n-2; i>=0; --i)  //prev val to next val
     {
     	a[i+1]=a[i];
	 }
	 
	 a[0]=last; //because a of last should come to first place
	 
	 //print
	 for(i=0; i<n; i++)
	  cout<<a[i]<<" ";
	}
	  cout<<endl;
     return 0;
     
}

//2 5
//1 2 3 4 5
//5 1 2 3 4

