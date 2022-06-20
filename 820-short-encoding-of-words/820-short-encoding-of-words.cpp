class Solution {
public:
    static bool cmp(string a, string b){
        return a.size()<b.size();
    }
    
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        
        string res;
        for(int i=words.size()-1; i>=0; i--){
            string s= words[i] + '#';
            size_t found = res.find(s);
            if(found == string::npos){
                res += s;
            }
        }
        
        return res.size();
    }
};