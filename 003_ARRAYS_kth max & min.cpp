//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;        
  
  int a[n],i;
  for(i=0; i<n; i++)
     cin>>a[i];         //array input is done
     
   sort(a,a+n);     //in-built sort function ,STL
   cout<<a[k-1]<<" "<<a[n-k];  //kth min will be a[k-1]; kth max will be a[n-k]
   
   //suppose n=5, k=1 then a[0]
    
     
  return 0;
  }
  
//5 1
//4 5 3 1 2
//1 5       (1st min and 1st max as k=1)

//5 2
//4 5 3 1 2
//2 4  (2nd min and 2nd max)

