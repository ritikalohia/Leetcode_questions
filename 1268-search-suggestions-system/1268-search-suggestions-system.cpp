class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> strvect;
        
        for(int i=0; i<products.size(); i++){
            cout<<products[i]<<" ";
        }
        
        for(int i=0; i<searchWord.size(); i++){
            strvect.push_back(vector<string>());
            string str = searchWord.substr(0,i+1);
            int k=0;
            int flag=0;
            while(k<products.size() && flag<3){
                string p = products[k].substr(0,i+1);
                if(p==str){
                    strvect[i].push_back(products[k]);
                    flag++;
                } 
                k++;
            }
            
        }
        
        return strvect;
        
    }
};