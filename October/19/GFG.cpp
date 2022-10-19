// Hamiltonian Path
// https://practice.geeksforgeeks.org/problems/hamiltonian-path2522/1

void helper(vector<int>adj[],int i,int cnt, int n, bool &res,vector<int>&vis){
   vis[i] = 1;
   if(cnt==n)
      res = true;

   for(int j:adj[i]){
      if(vis[j]==1)
         continue;
      helper(adj,j,cnt+1,n,res,vis);
   }
   vis[i] = 0;
}

bool check(int N,int M,vector<vector<int>>Edges){
   vector<int> adj[N+1];
   for(int i=0;i<M;i++){
      auto it = Edges[i];
      adj[it[0]].push_back(it[1]);
      adj[it[1]].push_back(it[0]);
   }
   vector<int> vis(N+1,0);
   bool res = false;

   for(int i=1;i<=N;i++){
      helper(adj,i,1,N,res,vis);
   }
   return res;
}
