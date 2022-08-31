#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void Bread_first_search()
{
  ll n,m,l;//node = n and edge = m,destination node or path = l
  cin>>n>>m>>l;
  ll i,j;
  vector<vector < ll > >adj(n);
  for(i=0;i<m;i++)
  {
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);

  }
  bool vis[n];
  for(i=0;i<m;i++)vis[i]=false;
  ll parent[n];
  for(i=0;i<n;i++)parent[i]=i;
   
   queue < ll > q;
   vis[0]=true;
   q.push(0);
   while(!q.empty())
   {
    ll v = q.front();
    q.pop();
    for(int x : adj[v])
    {
      if(vis[x]==true)continue;
      vis[x]=true;
      q.push(x);
      parent[x]=v;

    }
   }
   for(int i=0;i<n;i++)
   {
    if(vis[i]==true)
    cout<<1<<" ";
    else cout<<0<<" ";
   }
                       
   ll v=l ;//here l = path
   vector <ll > path;
   path.push_back(v);
   cout<<"print path"<<endl;
   while(v!=parent[v])
   {
    path.push_back(parent[v]);
    v=parent[v];
   }
   reverse(path.begin(),path.end());
   for(ll x : path)cout<<x<<" ";
   cout<<endl;

   
}
int main()
{
   ll t,i;
   // cin>>t;
   //for(i=0;i<t;i++)
    Bread_first_search();
    return 0;
}