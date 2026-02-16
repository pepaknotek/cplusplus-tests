class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        string str = s;
        int start = 0;
        int end = s.length() -1;

        while (start < end){

            while(start < end && vowels.find(str[start]) == string::npos){
                start++;
            }
            while(start < end && vowels.find(str[end]) == string::npos){
                end--;
            }
            swap(str[start], str[end]);
            start++;
            end--;
        }
 
        return str;
    }
};
