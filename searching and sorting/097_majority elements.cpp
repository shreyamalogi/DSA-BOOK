//author :shreyamalogi

/*

find majority element

approach: randomaization : there is a posibility if there are n elements there is a posibility 
that the elemet will occur n/2 times 
just by keeping a count variable 

tc: o(n)
sc: o(1)
*/


#include<bits/stdc++.h>
using namespace std;


bool isMajority(int a[], int n, int cand) 
{ 
    int count = 0; 
    for (int i = 0; i<n; i++) 
  
        if (a[i] == cand) 
            count++; 
  
    if (count > n/2) 
        return 1; 
  
    else
        return 0; 
} 

int majorityElement(int a[], int n)
{
    int ans=0,cnt=0;
    
    for(int i=0;i<n;++i)
    {
        if(cnt==0)
           ans=a[i];
           
        if(ans==a[i])
           cnt++;
           
        else
          cnt--;
    }
    
    if(isMajority(a,n,ans))
       return ans;
       
      return -1; 
    
}



int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}

//2
//3
//1 2 3
//-1
//5
//3 1 3 3 2
//3


