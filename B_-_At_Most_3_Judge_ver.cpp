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
    int dp[1000009];
    int f[1000009];
    int32_t main()
    {
        ios_base::sync_with_stdio(false),
        cin.tie(NULL),
        cout.tie(NULL);
        
        int n,w;
        cin>>n>>w;
        vi a(n);
        scan(a);
        set <int> ans;
        for(int i=0;i<n;i++){
            if(a[i]<=w)
            ans.insert(a[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]<=w)
                ans.insert(a[i]+a[j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[i]+a[j]+a[k]<=w)
                    ans.insert(a[i]+a[j]+a[k]);
                }
            }
        }
        cout<<ans.size();
    }