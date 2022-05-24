#include <bits/stdc++.h>
using namespace std;

int helper(int a[], int n){
    set <int> s;
    for(int i=0;i<n;i++) s.insert(a[i]);
    for(int h=1;;h++){
        auto it=s.lower_bound(h);
        int num=n-distance(s.begin(),it);
        if(num==h){
            return h;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false),
    cin.tie(NULL),
    cout.tie(NULL);
    int a[]={6,8,2,7,3,12,21};
    cout<<helper(a,7)<<endl;    
    return 0;
    
}