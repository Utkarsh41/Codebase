// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        
        // Finding window of size c
        int c=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                ++c;
            }
        }
        
        // Chking no greater than k
        int bn=0;
        for(int i=0;i<c;i++){
           if(arr[i]>k)bn++; 
        }
        
        int res=bn;
        // Chk remaining window
        for(int i=0,j=c;j<n;i++,j++){
            // Yha pe ws ko exclude kr rha 
            if(arr[i]>k)bn--;
            // Yha windoEnd ko include kr rha
            if(arr[j]>k)bn++;
            // Answers ko niptate chalo
            res = min(res,bn);
            
        }
        
        
        
       return res; 
        
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends