// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        stack<string> stackString;
        stack<int> num;
        string currString = "";
        string prevString = "";
        int prevNum=0;
        int number =0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] >= '0' && s[i] <= '9'){
                number =  number*10 + (s[i]-'0');
                
            }
            if(s[i] == '['){
                num.push(number);
                number= 0;
                stackString.push(currString);
                currString="";
                
            }
            if(s[i]==']'){
                prevNum = num.top();
                num.pop();
                prevString = stackString.top();
                stackString.pop();
                while(prevNum--){
                    prevString+=currString;
                }
                currString = prevString;
            }
            if(s[i]>= 'a' && s[i]<='z'){
                currString+=s[i];
                
            }
        }
        return currString;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends