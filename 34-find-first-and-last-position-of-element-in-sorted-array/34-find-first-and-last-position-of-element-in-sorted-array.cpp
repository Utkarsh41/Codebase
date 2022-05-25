class Solution {
public:
    
    
    
int indxofFirst(vector<int>v,int t){
  int l=0,ans=-1;
  int h=v.size()-1;

  int m;

  while(l<=h)
  {
    m=l +(h-l)/2;
    if(v[m]==t){
      ans=m;
      h=m-1;
    }
    else if(v[m]>t)h=m-1;
    else l=m+1;
  }

return ans;
  
}
int indxofLast(vector<int>v,int t){
  int l=0,ans=-1;
  int h=v.size()-1;

  int m;

  while(l<=h)
  {
    m=l +(h-l)/2;
    if(v[m]==t){
      ans=m;
      l=m+1;
    }
    else if(v[m]>t)h=m-1;
    else l=m+1;
  }

return ans;
  
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int fo =  indxofFirst(nums,target);
        res.push_back(fo);
         int lo =  indxofLast(nums,target);
        res.push_back(lo);
        
        return res;
    }
};