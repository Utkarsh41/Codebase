class Solution {
public:
    // vector<int>res(10004*5);

    void mergeit(vector<int>& nums,int l,int m,int h){
        int i=l;
        int j=m+1,
        k=0;
        vector<int>b(h-l+1,0);
        while(i<=m && j<=h){
            if(nums[i]<=nums[j]){
                b[k++]=nums[i++];
            }
            else{
                b[k++]=nums[j++];
            }
        }
        while(i<=m){
           b[k++]=nums[i++];
        }
        while(j<=h){
           b[k++]=nums[j++];
        }
        
        for (k = 0; k < (h-l+1); k++)
		nums[k + l] = b[k];

    }
    void mergeSort(vector<int>& nums,int l,int h){
        int m;
        if(l>=h) return;
        m=l+(h-l)/2;
        mergeSort(nums,l,m);
        mergeSort(nums,m+1,h);
        mergeit(nums,l,m,h);

        
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        
        mergeSort(nums,0,n-1);
        return nums;
    }
};