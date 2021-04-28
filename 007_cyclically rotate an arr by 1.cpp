//author :shreyamalogi

//cycling rotate an array by one

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

