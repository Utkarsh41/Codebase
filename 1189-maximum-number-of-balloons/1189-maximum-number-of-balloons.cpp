class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
//         vector<int>c(26,0);
//         bool chk=true;
//         for(int i=0;i<text.size();i++){
//             c[text[i]-'a']++;
//         }
        
//         string m="balloon";
//         int res=0;
        
//         for(auto i:c)cout<<i<<endl;
        
//         for(int i=0;i<m.length() && chk;i++){
//             if(c[m[i]-'a']>0){
//                 c[m[i]-'a']--;
//             }
//             else{
//                 chk=false;
//             }
//             if(i==m.length()-1 && chk==true){
//                 res++;
//             }
//         }
//         return res;
        
        int b=0, a=0, l2=0, o2=0, n=0;
            
        for(int i=0;i<text.size();i++){
            
            if(text[i]=='b') b++;
            else if(text[i]=='a') a++;
            else if(text[i]=='l') l2++;
            else if(text[i]=='o') o2++;
            else if(text[i]=='n') n++;
        }
        l2=l2/2;  o2=o2/2;  //both occours 2 times in the balloon
        int ans=min({b, a, l2, o2, n}); // min occourence of the char would be the solution
        return ans;
        
    }
};

