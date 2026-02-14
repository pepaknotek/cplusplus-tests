
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int i = 0;
    string celek;

        if( word1.length() < word2.length()){
            for(char c : word1){
                celek.append(1,c);
                celek.append(1,word2[i]);
                i++;
            }
            celek += word2.substr(i);
        }
        else{
            for(char c : word2){
                celek.append(1,word1[i]);
                celek.append(1,c);
                i++;
            }
            celek += word1.substr(i);
        }
    return celek;
    }
};
