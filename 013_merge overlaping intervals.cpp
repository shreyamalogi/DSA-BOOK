//author :shreyamalogi

//time complexity--o(NlogN)
//SPACE Complexity--o(N)

#include<bits/stdc++.h>

using namespace std;



int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> a;  //vector of pair
	for(int i=0;i<n;i++){
		int x,y;             //2 inputs
		cin>>x>>y;
		a.push_back({x,y});   //array me push bk 
	}
	//then sort it
	
	sort(a.begin(),a.end());
	stack<pair<int, int>> s;   //taking a stack in pair wise
	s.push({a[0].first,a[0].second}); //1st parameter ko gusadenge
	for(int i=1;i<n;i++){             //1 to last tk run karenge
	   //taking 4 parameters
		int start1= s.top().first;
		int end1 = s.top().second;
		int start2= a[i].first;
		int end2 = a[i].second;
		
		if(end1 < start2){
			s.push({start2,end2});  //we acnt merge just push it to the stack
			
		}
		else{
			s.pop();                //first we need to delete the top elements then update it
			
			end1 = max(end1,end2);  //update
			s.push({start1,end1});  //push the updated into the stack
			
		}
	}
	while(!s.empty()){                 //while stack is not empty
		cout<<s.top().first<<" "<<s.top().second<<endl;
		s.pop();
	}
     return 0;
}

