class Solution {
public:
    static bool cmp(string a, string b){
        return a.length()<b.length();    
    }
    
    int longestStrChain(vector<string>& words) {
        int res=1;
        sort(words.begin(), words.end(), cmp);
        unordered_map<string,int> dp;

        for(string word: words){
            dp[word]=1;
            for(int i=0; i<word.length(); i++){
                string prev = word.substr(0,i) + word.substr(i+1);
                if(dp.find(prev) != dp.end()){
                    dp[word]= max(dp[word], dp[prev]+1);
                    res = max(res, dp[word]);
                }
            }
        }
        
        return res;
    }
};