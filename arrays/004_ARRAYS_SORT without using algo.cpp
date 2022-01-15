//author :shreyamalogi
// given an array which cosists of only 0,1 and 2, sort the array without using any sorting algo

//so we will keep 3 variables which counts occurence of 1 2 and 3
//time complexity O(n) because we will be counting how many ones how many twos ....will be there and then fill the array accordingly

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n; cin>>n;
  
  int a[n],i;
  for(i=0; i<n; i++);  cin>>a[i];
   
    
    //init 3 count variables to 0
    int c0=0,c1=1,c2=2;
    
    //use a loop till n and check conditions take array conditions and increment the respective counters
    for(i=0;i<n;i++){
    	if(a[i]==0){
    		c0++;
		}
		else if(a[i]==1){
			c1++;
		}
		else{
			c2++;
		}
	}
	
	//use a loop till n and check i conditions with count and push the elements to their respective indices
	for(i=0;i<n;i++){
		if(i<c0){
			a[i]=0;
		}
		else if(i<c0+c1){
			a[i]=1;
		}
		else{
			a[i]=2;
		}
	}
    

  for(i=0; i<n; i++) cout<<a[i]<<" ";
    
    return 0;
}



//5
//1 0 2 1 2

//0 1 1 1 2

