//author :shreyamalogi

//Rearrange array in alternating positive & negative items with O(1) extra space


//approach:take 2 pointers i(at first) and j(at last)
// +ve to first and negitive to last

// 2 3 -4 -1 6 -9        //i at 2, j at -9, it is barabar so dont do anything
// 2 3 -4 -1 6 -9        //i at 3 (true), j at 6 is false
// 2 3 -4 -1 6 -9	    //just move i forward but will be at 6 only
// 2 3  6  -1 -4 -9       //swap then we can see both will point towards -1, as it is -ve j will go to 6 i++,j--
//then we get condition i<=j then break outaa loop

//we see that i is pointing towards first -ve element and take k which will be pointing towards 1st positive eleement then swap i with k
//i ko 1 se iterate and k to 2 se iterate

 #include<bits/stdc++.h>

using namespace std;

int main()
{
	 int n;
	 cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++) cin>>a[i];
	 
	 int i=0; int j=n-1;  //i ko starting me, j ko last me
	 while(i<=j)     //in this while loop we will get all positive to left and all negitive to right
	 {
	 	if(a[i]<0 and a[j]>0){ //check false condition
	 		swap(a[i],a[j]);  //swap it
	 		i++;
	 		j--;
		 }
		 else if(a[i]>0 and a[j]<0){ //check true condition and do ntg just incr/dec
		 i++;
		 j--;
		}
		else if(a[i]>0){  //1 is true just move forward
			i++;
		}
		else if(a[j]<0){  //other 1 is true move bkwards
			j--;
		}
	}
	
	//checking conditions
	if(i==0 or i==n){
		for(int m=0; m<n; m++) cout<<a[m]<<"";
		cout<<endl;
	}else{
		int k=0;
		while(k<n and i<n){
			swap(a[k],a[i]);
			k=k+2;
			i++;
		}
		for(int m=0; m<n; m++) cout<<a[m]<<" ";
		cout<<endl;
	}
	
     return 0;
}

//6
//2 3 -4 -1 6 9

//-1 3 -4 6 2 9

