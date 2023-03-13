return dfs(1,t);
double dfs(int i, int t) {
// When time finishes or adjacent list is of size 1.
if (i != 1 && G[i].size() == 1 || t == 0) {
return i == target;
}
seen[i] = true;
double res = 0;
for (auto j : G[i]) {
if (! seen[j]) {
res += dfs(j, t - 1);
}
}
return res / (G[i].size() - (i != 1));
}