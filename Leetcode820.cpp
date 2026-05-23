#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool cmp(string &a, string &b)
    {
        return a.size()>b.size();
    }
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        string ans="";
        ans+=words[0]+'#';
        for(int i=1;i<words.size();i++)
        {
            if(ans.find(words[i]+'#')!=string::npos)
            {
                continue;
            }
            ans+=words[i]+'#';
        }
        return ans.length();
    }
};