class Solution {
public:
    int base = 1000000007;
    int factorial(int x){
        if(x==1)
            return x;
        return (x+factorial(x-1))%base;
    }
    
    int countHomogenous(string s) {
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
        int sum=0;
        for(int i=0; i<vect.size(); i++)
            sum += factorial(vect[i].second)%base;
        
        return sum%base;
    }
};