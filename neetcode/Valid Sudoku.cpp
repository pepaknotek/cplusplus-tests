class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows
        for(int row = 0; row < 9;row ++){
            unordered_set<int> seen;
            for(int col = 0; col< 9;col++){
                if(board[row][col] != '.'){
                    int temp = board[row][col] - '0';
                    if(seen.find(temp) != seen.end()){
                        return false;
                    }else{
                        seen.insert(temp);
                    }
                }
                
            }
        }
        // check columns
        for(int row = 0; row < 9;row ++){
            unordered_set<int> seen;
            for(int i = 0; i< 9;i++){
                if(board[i][row] != '.'){
                    int temp = board[i][row] - '0';
                    if(seen.find(temp) != seen.end()){
                        return false;
                    }else{
                        seen.insert(temp);
                    }
                }
                
            }
        }
        //check 3x3
        unordered_set<char> seen[9];
        for(int row = 0; row < 9; row ++){
            for(int col = 0; col < 9;col++){
                if(board[row][col] != '.'){
                    int index = (row / 3) * 3 + (col / 3);
                    int temp = board[row][col];
                    if(seen[index].count(temp)){
                        return false;
                    }else{
                        seen[index].insert(temp);
                    }
                }
            }
        }
        
        return true;
    }
};
