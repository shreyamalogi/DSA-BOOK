//author :shreyamalogi

//q11, find the duplicates of N+1 array

//time complexity o(n)
//space complexity o(1)

#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n;i++){
		a[a[i]%n] = a[a[i]%n]+ n;	                    //cuz when we go to index 2 it will give 8 (n+1inedx = 5+2=8) therefore: 8%6=2,15%6=3,21%6=3,
		                    
	}
	for(int i=0;i<n;i++){
		if(a[i]/n>1)  cout<<i<<endl; //which is our duplicated element
		
	}
}
int main()
{
	solve();
     return 0;
}


//6
//1 2 3 3 2 3

//output, the duplicates are
//2
//3

