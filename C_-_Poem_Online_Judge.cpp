#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950288419
typedef long long ll;
#define pb push_back
#define pii pair<int,int>
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define vi vector <int>
#define vll vector <long long>
#define get_max(a) *max_element(a.begin(),a.end())
#define get_min(a) *min_element(a.begin(),a.end())
#define get_sum(a) accumulate(a.begin(),a.end(),0LL)
#define all(a) a.begin(),a.end()
#define int long long
#define setbits(x) __builtin_popcountll(x)
#define scan(a) for(int &i: a) cin>>i
 
int32_t main()
{
    ios_base::sync_with_stdio(false),
    cin.tie(NULL),
    cout.tie(NULL);
    
    int n;
    cin>>n;
    map <string,int> m;
    int index=-1;
    int og=-1;
    for(int i=0;i<n;i++){
        string s;
        int t;
        cin>>s>>t;
        if(m.find(s)==m.end()){
            m[s]=t;
            if(t>og){
                og=t;
                index=i;
            }
        }
        m[s]=t;
    }
    cout<<index+1<<endl;
    
    return 0;
}