//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	 int n,m; //taking lengths of the array
	 cin>>n>>m;
	 
	 int a1[n], a2[m];
	 for(int i=0;i<n;i++) cin>>a1[n];
	 for(int i=0;i<m;i++) cin>>a2[m];
	 
	 //take another variable j (i will be last,j will be start)
	 int j;
	 int i=n-1;
	 j=0;
	 
	 while(i>=0 && j<m)
	 {
	 	if(a1[i]>a2[j])
	 		swap(a1[i],a2[j]);   //swap a1[i] with a2[j]
	 	else
		 break;                 //if thios condition is not true then we will break out
		 
		 i--;
		 i++;	
	 }
	 
	 //sorting both the arrays (a,a+n)
	 sort(a1, a1+n);
	 sort(a2, a2+n);
	 
	 //we dont have to output anything so its is done
     return 0;
}

