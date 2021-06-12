//author :shreyamalogi

/*
count triplets with sum smaller than given value


*/


	long long countTriplets(long long arr[], int n, long long sum)
	{
	   sort(arr,arr+n);
	   
	   long long int i,j,k,cnt=0;
	   
	   for(i=0;i<n;++i)
	   {
	       j=i+1;
	       k=n-1;
	       while(j<k)
	       {
	           if(arr[i]+arr[j]+arr[k]>=sum)
	               k--;
	               
	           else
	             {
	                 cnt+=(k-j);
	                 j++;
	             }
	       }
	   }
	   
	   return cnt;
	}
		 




int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


