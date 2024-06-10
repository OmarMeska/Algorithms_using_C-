#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector < vector<int >> Graph;
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define ll long long int
#define llu unsigned long long int 
#define tc     \
  ll test;     \
  cin >> test; \
  while (test--)
#define vi vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " " <<
#define spacef << " "
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x)   \
  for (auto i : x) \
  cout out i spacef
#define mmax(x, i) x = max(x, i)
#define mmin(x, i) x = min(x, i)
#define N 105
int freq[1000000] = {0};
ll mod = 100000000000000000 + 2;
ll fastpower(ll a, ll b){ll ans = 1;while (b){if (b % 2){ans = ans * a;}a = a * a;b /= 2;}return ans;}
void add_directed_edge (vector < unordered_set<int >> &graph ,int from , int to){
    graph[from].insert (to) ;
}
void add_undirected_edge (vector < unordered_set < int >> &graph ,int from , int to){
    graph[from].insert (to); 
    graph[to].insert(from) ;
}
void print_ad (vector < unordered_set< int >> &graph){
    int nodes =graph.size() ; 
    for (int from =0 ;from <nodes ; from ++){
        cout  out "nodes " out from out "has neighbors : "; 
        for (int  to : graph [from]) 
        cout << to << " " ; 
        cout << endl; 
    }
}
int main() {
    int nodes,edges  ; 
    cin  in nodes  in edges;
vector < unordered_set < int > >graph  (nodes)  ;
for (int i=0 ;i < edges ; i++){
    int from  ,to ;
    cin in from in to ;
    add_directed_edge (graph, from , to) ;
}
print_ad(graph) ;
return 0; }