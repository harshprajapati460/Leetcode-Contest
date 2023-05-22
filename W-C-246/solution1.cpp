#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(auto it:s){
            
           if(it == 'B' && st.size() > 0 && st.top() == 'A'){
                st.pop();
            }
          else if(it == 'D' && st.size() > 0 && st.top() == 'C'){
               st.pop();
            }
           else {
               st.push(it);
           }
            
        }
        
        return st.size();
    }
};

int main(){

string s;
cin >> s;
Solution obj;
cout<<obj.minLength(s)<<endl;
return 0;
}