#include<bits/stdc++.h>

using namespace std;


#define ms(x,val) memset(x,val,sizeof(x))
#define scan(x) scanf("%d",&x)
#define scanL(x) scanf("%I64d",&x)
#define print(x) printf("%d\n",x)
#define debug(x) printf("DEBUG: %d\n",x)
#define printL(x) printf("%I64d\n",x)
#define ull unsigned long long
#define iii long long
#define pi acos(-1)
#define pb push_back
#define PII pair<int,int>
#define vi vector<int>
#define itr_all(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define MAPL map<long long, int > 
#define MAPI map<int,int> 
#define MAPP map< pair<int,int> , int>
#define MP make_pair
#define eps 1e-9
#define inf 999999999
#define MAXN 1000009
#define MOD 1000000007 // 10^9 + 7

template < class T > T gcd(T a , T b ) { if(b==0) return a; else return gcd(b, a%b);}
template < class T > T lcm(T a , T b ) { return  a*b / gcd(a, b);}
template < class T > T absolute(T a ) { if(a>0) return a; else return -a;}
inline iii power(iii base,iii p) { iii ans=1; while(p>0) ans*=base,p-=1; return ans;}


int main()
{
//	  ios::sync_with_stdio(false);
//	  freopen("in.txt","r",stdin);

    iii a,b,x,y,xy,cmn,only_a,only_b,v;
    cin>>a>>b>>x>>y;
    xy=x*y;
    v=a+b;

    only_a=(v/x)-(v/xy);
    only_b=(v/y)-(v/xy);
    cmn=v-only_a-only_b-v/xy;
//    cout<<only_a<<' '<<only_b<<' '<<cmn<<endl;

    while( a+b-min(b,only_a)-min(a,only_b) >cmn )
    {
        v+=(a+b-min(b,only_a)-min(a,only_b)-cmn);
        only_a=(v/x)-(v/xy);
        only_b=(v/y)-(v/xy);
        cmn=v-only_a-only_b-v/xy;
    }

    cout<<v<<endl;





    return 0;
}