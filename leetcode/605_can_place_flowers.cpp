class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0){
            return true;
        }
        for(int i = 0; i < flowerbed.size();i++){
            if(flowerbed.size() == 1){
                if(flowerbed[i] == 1){
                    return false;
                }else{
                    return true;
                }
            }
            if( i == 0){
                if(flowerbed[i+1] == 0 and flowerbed[i] == 0){
                    n--;
                    flowerbed[i] = 1;
                }
            }if(i > 0 and i < flowerbed.size()-1){
                if(flowerbed[i-1] == 0 and flowerbed[i+1] == 0 and flowerbed[i] == 0){
                    n--;
                    flowerbed[i] = 1;     
                }
            }if( i == flowerbed.size()-1){
                if(flowerbed[i-1] == 0 and flowerbed[i] == 0){
                    n--;
                    flowerbed[i] = 1;
                }
            }if(n == 0){
                return true;
            }  
        }
        return false;
    }
};
