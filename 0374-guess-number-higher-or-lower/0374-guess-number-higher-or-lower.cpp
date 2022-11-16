/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int l=1,h=n;
        int m= l+(h-l)/2;
        
        while(l<=h){
            m= l+(h-l)/2;
            int num = guess(m);
            if(num==-1){
                h=m-1;
            }
            else if(num==1){
                l=m+1;
            }
            else if(num==0){
                return m;
            }
        }
        return m;
        
    }
};