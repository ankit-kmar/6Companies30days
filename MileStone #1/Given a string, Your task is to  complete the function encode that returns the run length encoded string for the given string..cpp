#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{  
    char temp = src[0];
    int count =0;
    
    string s = "";
    for(int i=0; i<src.length(); i++){
        if(src[i]==temp){
            count++;
        }
        else{
            s+=src[i-1];
            s+=to_string(count);
            temp = src[i];
            count = 1;
        }
    }
    s+=src[src.length() - 1];
    s+=to_string(count);
    
    
return s;
  //Your code here 
}     
 
