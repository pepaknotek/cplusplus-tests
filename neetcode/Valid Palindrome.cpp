class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        // pro memory O(1) je potře 2 pointery které se budou posouvat a přeskakovat všechno co není isalnum(unsigned char)
        for(unsigned char c : s){
            // isalnum zahrne číslice a písmena
            if(isalnum(c)){
                clean += tolower(c);
            }
        }
        int i = 0;
        int end = clean.size()-1;
        // když je palindrom prázdný
        if(clean == ""){
            return true;
        }
        // když je palindrom jeden znak
        if(end < 1 ){
            return true;
        }
        // kontrola palindromu
        while (i < end){
            if(clean[i] != clean[end]){
                return false;
            }
            i++;
            end--;
        }
        return true;
    }
};
