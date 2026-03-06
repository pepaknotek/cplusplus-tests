class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto const& str : strs){
            s += to_string(str.size());
            s += "#";
            s += str;
        }
        std::cout << s << std::endl;
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        while (i < s.size()){
            //find how long is the number
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            
            i= j+1;
            // puts the word in array
            strs.push_back(s.substr(i, length));
            // move loop forward to next word
            i += length;
            
        }
        return strs;
    }
};
