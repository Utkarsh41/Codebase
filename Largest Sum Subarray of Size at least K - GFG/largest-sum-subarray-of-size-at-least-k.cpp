//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

long long int maxSumWithK(long long int a[], long long int n, long long int k);

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        cout << maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int maxSumWithK(long long int a[], long long int n, long long int k) 
{
    long long res=INT_MIN,we=0,ws=0,currSum=0,winSt=0,minWin=0;
    
    
    while(we<n){
        // Adding sum
        currSum+=a[we]; 
        
        // computing res
        if(we-ws+1 == k){
            res=max(res,currSum);
        }
        
        if(we-ws+1 > k){
            winSt+=a[ws];
            ws++;
            minWin=min(minWin,winSt);
            res=max(res,currSum-minWin);
        }
        we++;
    }
    return res;
}