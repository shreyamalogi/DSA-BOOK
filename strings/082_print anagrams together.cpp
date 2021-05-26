//author :shreyamalogi

/*

brute only ik i dint try with tries

*/


//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;

vector<vector<string> > Anagrams(vector<string>& s) 
{
    map<map<char, int>, vector<string>> my_map;
     
   
    for(string str : s)
    {
         
        map<char, int> temp_map;
        vector<string> temp_my_list;
        for(int i = 0; i < str.length(); ++i) 
        {
            ++temp_map[str[i]];
        }
         
       
        auto it = my_map.find(temp_map);
        if (it != my_map.end())
        {
            it->second.push_back(str);
        }
        else
        {
            temp_my_list.push_back(str);
            my_map.insert({ temp_map, temp_my_list });
        }
    }
     
   
    vector<vector<string>> result;
 
    for(auto it = my_map.begin();
             it != my_map.end(); ++it)
    {
        result.push_back(it->second);
    }
 
 return result;
	                 
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

//1
//5
//act god cat dog tac
//act cat tac
//god dog

