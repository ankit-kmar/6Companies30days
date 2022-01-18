class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        string sub = "";
        // int len = contact.size();
        int j = 0;
        vector<string> sett;
        vector<vector<string>>ans(s.size());
        for(int i=0;i<n;i++){
            sett.push_back(contact[i]);
        }
        
        for(int i=0;i<s.length();i++){
            
            for(auto j : sett){
                if(s.substr(0,i+1) == j.substr(0,i+1)){ ans[i].push_back(j);}
            
                
            }
            if(ans[i].size()==0){ ans[i].push_back(to_string(0));}
        }
        return ans;
        // code here
    }
};