class Solution {
public:
    bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b){
    return (a.second < b.second);
    }
    
    int maxPower(string s) {
        vector<pair<char,int>> vect;
        
        int j=0,i=0, cnt=0;
        for(i=0; i<s.length(); i++){
            if(s[i]==s[j])
                cnt++;
            else{
                vect.push_back(make_pair(s[j], i-j));
                j = i;
                cnt=0;
            }
        }
        vect.push_back(make_pair(s[j], i-j));
        
        sort(vect.begin(), vect.end(), [](auto &left, auto &right) {
            return left.second < right.second;
        });

        
        return vect[vect.size()-1].second;
    }
};