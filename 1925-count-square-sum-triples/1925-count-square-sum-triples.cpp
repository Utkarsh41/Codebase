class Solution {
public:
    int countTriples(int n) {
        
        int cnt=0;
        
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                    
                    // cout<<i<<"-i"<<endl;
                    // cout<<j<<"-j"<<endl; 
                    //  cout<<k<<"-k"<<endl;
                    int a= (i*i)+(j*j);
                    int c=sqrt(a);

                    if( c*c==a &&c<=n ){
                        cnt+=2;
                    }
                
            }
        }
        return cnt;
        
        
    }
};