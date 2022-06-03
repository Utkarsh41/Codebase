class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
//         int l=0,h=letters.size()-1;
        
//         while(l<h){
//             int m=l+(h-l)/2;
            
//             if(letters[l]<=target){
//                 l=m+1;
//             }
//             else{
//                 h=m;
//             }
//         }
//         return letters[l]>target?letters[l]:letters[0];
        int low = 0;
        int high = letters.size()-1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(letters[mid] <= target){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        return letters[low] > target ? letters[low] : letters[0];
        
    }
};