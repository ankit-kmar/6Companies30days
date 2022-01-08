class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string ret =  "";
        string s = str1+str2;
        if(str1+str2 == str2+str1){
            int ans = gcd(str1.size(), str2.size());
            for(int i =0; i< ans;i++){
                ret += s[i];
            }

        }
        return ret;
    }
};