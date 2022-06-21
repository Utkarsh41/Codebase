// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ut = new int[2];
        
        
        map<int,int>mp;
        for(int i=0;i<n;i++)mp[arr[i]]++;
        
        int ms;
        for(int i=0;i<=n;i++){
            if(mp[i]==0){
                ms=i;
            }
        }
        int rep;
        for(auto c:mp){
            if(c.second==2){
                rep=c.first;
            }
        }
        
        
        ut[0]=rep;
        ut[1]=ms;
        
        return ut;

    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends