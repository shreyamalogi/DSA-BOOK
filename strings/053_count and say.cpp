//author :shreyamalogi

//count and say

//first counter kitna hai, fir value

//eg: 3 3   2 2 2  5    1
//so  2 3   3 2    1 5  1 1

class Solution {
public:
    string countAndSay(int n) {
      if(n==1) return "1";		//base case
	  if(n==2) return "11";
	  string s="11";
	  for(int i=3;i<=n;i++){
	  string t="";					//next ith value ka iteration aayega
	  s=s+'&';
	  int c=1;						//countr
	  for(int j=1;j<s.length();j++){
	  	if(s[j]!= s[j-1]){		
	  		t=t+to_string(c);		//because c is int type we need to convert to string
	  		t=t+s[j-1];
	  		c=1; 					 //reset c
		  }
		  else c++;						//agr same hai 
	  }
	  s=t;  						//update
    }
    return s;
  }
};

