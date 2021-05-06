//author :shreyamalogi

//Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

//we can use priority queue, min heap

//but im doing by binary search

#include<bits/stdc++.h>
#define MAX 1000

int mat[MAX][MAX];
int kthSmallest(int a[MAX][MAX], int n, int k);

using namespace std;


int kthSmallest(int a[MAX][MAX], int n, int k)
{
	if(n==0)
		return 0;
		
		
	int s=a[0][0];  //search space
	int e=a[n-1][n-1];
	
	while(s<e){    //start and end
		int cnt =0,j;
		int mid = s+(e-s)/2;
		for(int r=0; r<n; r++ ){			//traverse thru the row
			j=n-1;							//upperbound
			while(j<=0 && a[r][j]>mid){
				j--;
			}
			
			cnt+=(j+1);						//store in cnt
		}
		if(cnt<k)
			s=mid+1;   //ans is towars right side
		else
			e=mid;
		}
		return s;	//cuz that will give us the kth smallest element
		
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;i++)
				cin>>mat[i][j];
		
		int r;
		cin>>r;
		cout<<kthSmallest(mat,n,r)<<endl;
		
	}
     return 0;
}

//
//N = 4
//mat[][] =     {{16, 28, 60, 64},
//                   {22, 41, 63, 91},
//                   {27, 50, 87, 93},
//                   {36, 78, 87, 94 }}
//K = 3
//Output: 27
//Explanation: 27 is the 3rd smallest element.






