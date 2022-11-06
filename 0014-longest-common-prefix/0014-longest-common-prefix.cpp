class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string st=strs[0];
        for(int i=1; i<strs.size(); i++){
            string temp;
            for(int j=0; j<min(st.length(), strs[i].length()); j++){
                if(st[j]==strs[i][j])
                    temp += st[j];
                else
                    break;
            }
            st = temp;
        }
        return st;
    }
};