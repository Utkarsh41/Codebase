string ans="";
map<char,int>mp;
for(int i=0;i<s.size();i++){
mp[s[i]]++;
​
}
priority_queue<pair<int,char>>pq;
for(auto x: mp){
pq.push({x.second,x.first});
}
while(!pq.empty()){
int n=pq.top().first;
while(n--){
ans.push_back(pq.top().second);
}
pq.pop();
}
return ans;