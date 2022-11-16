/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution1 {
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


class Solution {
public:
    int guessNumber(int n) {
        
        int l=1,h=n;
        int m= 0;
        
        while(l<=h){
            m= l+(h-l)/2;
            if(guess(m)==0){
                return m;
            }
           
            if( guess(m)==-1){
                h=m-1;
            }
            else if( guess(m)==1){
                l=m+1;
            }
            
        }
        return m;
        
    }
};