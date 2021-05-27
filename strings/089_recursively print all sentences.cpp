//author :shreyamalogi

/*

Recursively print all sentences that can be formed from 
list of word lists

*/


//#include<bits/stdc++.h>
//
//using namespace std;
//
//void print(string str[R][C], string sen, int r){
//	if(r==R) //R is no of rows (last row)
//		{
//		cout<<sen<<endl;
//		return ;
//		}
//	for(int i=0;i<C;i++)
//	{
//		if(str[r][i]!= "") //recursion of calling the next row element
//			print(str,sen+ " " + str[r][i],r+1);
//	}
//}


#include <iostream>
#include <string>
 
#define R 3
#define C 3
using namespace std;
 
// A recursive function to print all possible sentences that can be formed
// from a list of word list
void printUtil(string arr[R][C], int m, int n, string output[R])
{
    // Add current word to output array
    output[m] = arr[m][n];
 
    // If this is last word of current output sentence, then print
    // the output sentence
    if (m==R-1)
    {
        for (int i=0; i<R; i++)
           cout << output[i] << " ";
        cout << endl;
        return;
    }
 
    // Recur for next row
    for (int i=0; i<C; i++)
       if (arr[m+1][i] != "")
          printUtil(arr, m+1, i, output);
}
 
// A wrapper over printUtil()
void print(string arr[R][C])
{
   // Create an array to store sentence
   string output[R];
 
   // Consider all words for first row as starting points and
   // print all sentences
   for (int i=0; i<C; i++)
     if (arr[0][i] != "")
        printUtil(arr, 0, i, output);
}

int main()
{
   string arr[R][C]  = {{"you", "we"},
                        {"have", "are"},
                        {"sleep", "eat", "drink"}};
 
   print(arr);
 
   return 0;
}


