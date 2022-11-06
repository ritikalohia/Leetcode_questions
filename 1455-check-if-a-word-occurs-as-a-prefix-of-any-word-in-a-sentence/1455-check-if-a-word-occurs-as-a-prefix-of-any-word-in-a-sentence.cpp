class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int x=1;
        if(sentence.substr(0, searchWord.size())==searchWord){
            return x;
        }
        
        for(int i=0; i<sentence.size(); i++){
            if(isspace(sentence[i])){
                x++;
                if(sentence.substr(i+1, searchWord.size())==searchWord){
                    return x;
                }
            }
        }
        return -1;
    }
};