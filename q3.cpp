#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    string resp;
    for(auto ch:s)
    {
if(isalnum(ch))
        resp+=tolower(ch);
    }
stack<int>st;

    for(auto val:resp)

    st.push(val);
    for (char ch : resp) {
            if (st.top() != ch ){
                return false;  
            }
  st.pop();
    }

    return true;
}
