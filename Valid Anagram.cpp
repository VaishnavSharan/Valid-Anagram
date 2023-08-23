
#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>count;
        //count the frequency of characters in s
        for(auto x:s)
        {
            count[x]++;
        }
        //decrement the characters of the t
        for(auto x:t)
        {
            count[x]--;
        }
        //check if any character has non-zero frequency
        for(auto x:count){
            if(x.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};