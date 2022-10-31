//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int ut(string s1, string s2,int x, int y,vector<vector<int>>&moi){
        if(x==0 || y==0){
            return moi[x][y]=0;
        }
        if(moi[x][y]!=-1){
            return moi[x][y];
        }
        
        if(s1[x-1]==s2[y-1]){
            moi[x][y]=1+ut(s1,s2,x-1,y-1,moi);
        }
        else{
            moi[x][y]=max(ut(s1,s2,x-1,y,moi),ut(s1,s2,x,y-1,moi));
        }
        return moi[x][y];
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>>moi(x+1,vector<int>(y+1,-1));
        return ut(s1,s2,x,y,moi);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends