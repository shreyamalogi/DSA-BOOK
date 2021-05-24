//author :shreyamalogi

/*

A sequence of strings is a collection of strings which we have entered by the user. In this problem, we have to find the second most repeated word in a sequence.

We are going to use maps in this solution. Maps will save the values of the word and their occurrences. Word will be used as the key and occurrence will be used as value.

Algorithm to solve this problem is :

Create a map. Save words as keys and occurrences as values.
Find the second most value.
Again traverse the map and find the key with the second-most value and return it.


*/


#include <bits/stdc++.h> 
using namespace std; 
string repeat(vector<string> s) 
{ 
  
    unordered_map<string, int> occ; 
    for (int i = 0; i < s.size(); i++) 
        occ[s[i]]++; 
        
    int first_max = INT_MIN;
	int sec_max = INT_MIN; 
    for (auto it = occ.begin(); it != occ.end(); it++) { 
        if (it->second > first_max) { 
            sec_max = first_max; 
            first_max = it->second; 
        } 
  
        else if (it->second > sec_max &&  
                 it->second != first_max) 
            sec_max = it->second; 
    } 
    for (auto it = occ.begin(); it != occ.end(); it++) 
        if (it->second == sec_max) 
            return it->first; 
} 
int main() 
{
    string str;
    int n;
    vector<string> s ;
    cout<<"Enter the number of string : ";
    cin>>n;
    cout<<"Enter the strings : ";
    for(int i=0;i<n;i++){
      cin>>str;
      s.push_back(str);
  }
    cout <<"The second most used word is : "<< repeat(s); 
    return 0; 
}


//Enter the number of string : 5
//Enter the strings : shreya nav nav shreya shreya
//The second most used word is : nav
