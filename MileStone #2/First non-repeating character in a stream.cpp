#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
        string ans = "";
        deque<char> q;
        int arr[26]={0};
        
        for(auto it:A){
            int pos = it - 'a';
            
            if(arr[pos] == 0){
                q.push_back(it);
            } 
            arr[pos]++;
            
            while(!q.empty() and arr[q.front() - 'a'] != 1) q.pop_front();
            
            if(q.empty()) ans += '#';
            else ans += q.front();   
        }
        return ans;
	}
		

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends