//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int>res;
	    priority_queue<int,vector<int>,greater<int>>minHeap(arr,arr+n);
	    while(minHeap.size()>k){
	        minHeap.pop();
	    }
	    while(!minHeap.empty()){
	        res.push_back(minHeap.top());
	        minHeap.pop();
	    }
	    sort(res.begin(),res.end(),greater<int>());
	    return res;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends