#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str, int n)
{
    //Write your code here.
     set<char> seen;
    string result;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result.push_back(ch);
        }
    }
    
    return result;
}
