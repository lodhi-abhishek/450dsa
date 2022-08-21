///░░░░░░░░░░░░░▄░░░░░░░░░░░░░░░░░░░░░
///░░░░░░░░░░░▄▐░▄▄█████▄▄░░░░░░░░░░░░░░
///░░░░░░░░░▄█████████████▄▀▄▄░▄▄▄░░░░░░░
///░░░░░░░░█████████████████▄██████░░░░░░░
///░░░░░░░████▐█████▌████████▌█████▌░░░░░░░
///░░░░░░████▌█████▌█░████████▐▀██▀░░░░░░░
///░░░░▄█████░█████▌░█░▀██████▌█▄▄▀▄░░░░░░░
///░░░░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀░░░░░░░
///░░░▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█░░░░░░░
///░░░░░███░▌▄█▌░░▀░░▀██░░▀██████▌░░░░░░░
///░░░░░░▀█▌▀██▀░▄░░░░░░░░░███▐███░░░░░░░░
///░░░░░░░██▌░░░░░░░░░░░░░▐███████▌░░░░░░░░
///░░░░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌░░░░░░░░
///░░░░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀░░░░░░░
///░░░░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀░░░░░░░
///░░░░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄░░░░░░░
///░░░░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄░░░░░░░
///░░░░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄░░░░░░░
///░░░░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐░░░░░░░
///░░░░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌░░░░░░░
///░░░░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐░░░░░░░░
///░░░░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌░░░░░░░
///░░░░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌░░░░░░


#include<bits/stdc++.h>
//#include<bits/extc++.h>
#define D double
#define ll long long
#define ld long double
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vll2 vector<vll>
#define vD vector<D>
#define vld vector<ld>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define P pair<int,int>
#define PLL pair<ll,ll>
#define vP vector<pair<int,int> >
#define vPLL vector<pair<ll,ll> >
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FORI(i,a,b) for(ll i=a;i<b;i++)
#define FORII(i,a,b,c) for(ll i=a;i<b;i+=c)
#define nFOR(i,a,b) for(i=a;i>=b;i--)
#define nFORI(i,a,b) for(ll i=a;i>=b;i--)
#define FORR(i,a) for(auto &i:a)
#define times(X) for(ll cas=0,tms=X;cas<tms;cas++)
#define print(...) db(#__VA_ARGS__,__VA_ARGS__);
#define println(...) dbln(#__VA_ARGS__,__VA_ARGS__);
#define cout(A) FORI(i,0,sizeof(A)/sizeof(ll)) cout<<A[i]<<' ';nl;
#define Extend ios_base::sync_with_stdio(0);CC;
#define CC cin.tie(NULL);cout.tie(NULL);
#define pout(d) cout<<fixed<<setprecision(d)
#define minQ(X) priority_queue<X,vector<X>,greater<X> >
#define maxQ(X) priority_queue<X,vector<X>,less<X> >
#define MEM(a,X) memset(a,X,sizeof(a))
#define all(X) X.begin(),X.end()
#define rand(V) random_shuffle(all(V))
#define lb(a,X) lower_bound(all(a),X)-a.begin()
#define ub(a,X) upper_bound(all(a),X)-a.begin()
#define uniq(V) V.erase(unique(all(V)),V.end());
#define len(X) ((ll)X.size())
#define lower(X) transform(all(X),X.begin(),::tolower);
#define upper(X) transform(all(X),X.begin(),::toupper);
#define _1s(a) __builtin_popcountll(a)
#define lowbit(X) (log2((D)X))
#define sgn(X) (X>0?1:X<0?-1:0)
#define sim template<class T
#define pb push_back
#define lsb(X) ((X)&(-X))
#define eb emplace_back
#define mkp make_pair
#define rdd rd()
#define sq(X) ((ll)sqrt(X))
#define ff first
#define ss second
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define endl '\n'
#define nl cout<<'\n'
#define re return
#define Bye return 0;
#define Imagination Solution S; S.solve();
#define Imaginations times(rdd){Solution S; S.solve();}
#define Your pre();
using namespace std;


/// Global Constant

const double phi = 1.618033988749864D;  ///(1+sqrt(5))/2;
const double pi = 3.141592653589D;
const long long oo = 1ll<<60;
const int dx[] = {1,-1,0,0,0};
const int dy[] = {0,0,1,-1,0};
const double eps = 1e-9D;
long long MODI = 1000000007;
                 //998244353;

/// Global Functions

ll rd(){ll X;cin>>X;re X;}
sim > void out(T X){cout<<X;exit(0);}
sim > void add(T& X,T Y){X=(X+Y)%MODI;}
sim > void mul(T& X,T Y){X=(X*Y)%MODI;}
sim > T max(T& X,T& Y,T& Z){re max(X,max(Y,Z));}
sim > T min(T& X,T& Y,T& Z){re min(X,min(Y,Z));}
sim > void order(T&X,T&Y){T A=min(X,Y);T B=max(X,Y);X=A;Y=B;}
sim > void order(T&X,T&Y,T&Z){order(X,Y);order(X,Z);order(Y,Z);}

sim > T sort(T &X){sort(all(X));re X;}
sim > T rsort(T &X){sort(all(X),__greater());re X;}
sim > T rev(T &X){reverse(all(X));re X;}

sim > T gcd(T X,T Y){re __gcd(X,Y);}
sim > T lcm(T X,T Y){re X/__gcd(X,Y)*Y;}
ll gcdX(ll A,ll B,ll&X,ll&Y){X=0;Y=1;if(!A)re B;ll Z=gcdX(B%A,A,Y,X);X-=(B/A)*Y;re Z;}
sim > T ceil(T X,T Y){re X>=0?(X+Y-1)/Y:-(-X/Y);}
sim > T floor(T X,T Y){re X>=0?(X/Y):-(-X+Y-1)/Y;}
bool vowel(char C){C=tolower(C);re(C=='a'||C=='e'||C=='i'||C=='o'||C=='u');}

string c2s(char &C){re string(1,C);}
string ll2s(ll S){stringstream SS;SS<<S;re SS.str();}
ll s2ll(string &S){ll X;stringstream SS(S);SS>>X;re X;}
vll s2v(string &S){ll Z=len(S);vll A(Z);FORI(i,0,Z)A[i]=S[i]-'0';re A;}
string v2s(vll &A){ll Z=len(A);string S(Z,' ');FORI(i,0,Z)S[i]=A[i]+'0';re S;}
ll rll(ll &X){string S=ll2s(X);reverse(all(S));re s2ll(S);}

bool pal(string &S){ll X=0,Y=len(S);for(;X<Y/2;X++)if(S[X]!=S[Y-X-1])re 0;re 1;}
bool pal(string &S,ll X,ll Y){for(;X<Y;X++,Y--)if(S[X]!=S[Y])re 0;re 1;}
string binary(ll X){string S;for(;X;X/=2)S.pb(X%2?'1':'0');rev(S);re S;}
ll decimal(string &S){ll dm=0,ct=1;nFORI(i,len(S)-1,0){dm+=ct*(S[i]=='1');ct*=2;}re dm;}
bool isPrime(ll X){if(!X%2)Bye;for(int i=3;i<=sq(X);i++)if(X%i==0)Bye;re 1;}

ll _sum_(vll &V){ll S=0;for(ll X:V)S+=X;re S;}
ll _min_(vll &V){ll M=V[0];for(ll X:V)M=min(M,X);re M;}
ll _max_(vll &V){ll M=V[0];for(ll X:V)M=max(M,X);re M;}
ll _lcm_(vll &V){ll G=0;for(ll X:V)G=lcm(G,X);re G;}
ll _gcd_(vll &V){ll G=0;for(ll X:V)G=__gcd(G,X);re G;}
ll _xor_(vll &V){ll G=0;for(ll X:V)G^=X;re G;}
vll _odd_(vll &V){vll O;for(ll X:V)if(X%2)O.pb(X);re O;}
vll _even_(vll &V){vll E;for(ll X:V)if(!(X%2))E.pb(X);re E;}

sim > T power(T X,ll Y){T A=(T)1;for(;Y;Y>>=1,X=(X*X))if(Y&1)A=(A*X);re A;}
sim > T powerm(T X,ll Y,ll M=MODI){T A=(T)1;for(;Y;Y>>=1,X=(X*X)%M)if(Y&1)A=(A*X)%M;re A;}
sim > T inv(T X,ll mod=MODI){re powerm(X,mod-2,mod);}

vll fac_help(ll X){vll V;for(ll i=1;i*i<=X;i++){if(X%i==0){V.pb(i);if(X/i!=i)V.pb(X/i);}};re V;}
vll factors(ll X){vll V=fac_help(X);sort(all(V));re V;}
void prime_help(ll &X,ll Y,vll &V){if(X%Y==0)V.pb(Y);while(X%Y==0)X/=Y;}
vll primeFac(ll X){vll V;prime_help(X,2,V);for(ll i=3;i*i<=X;i+=2)prime_help(X,i,V);if(X!=1)V.pb(X);re V;}
vll sieve(ll L){vb PR(L+=5,1);vll V;for(ll i=2;i*i<L;i++)if(PR[i])FORII(j,i*i,L+1,i)PR[j]=0;FORI(i,2,L-5)if(PR[i])V.pb(i);re V;}
vb sieve2(ll L){vb PR(L+=5,1);for(ll i=2;i*i<L;i++)if(PR[i])FORII(j,i*i,L+1,i)PR[j]=0;PR[1]=0;re PR;}

sim > T nc2(T X){if(X<2)re 0;re(X*(X-1))/2;}
ll fb(ll n){re(power((ld)phi,n)/sqrt(5)+0.5);}
ll nck(ll X,ll K){if(X<K)re 0;ll A=1;K=min(K,X-K);FORI(i,0,K)A*=(X-i),A/=(i+1);re A;}
sim > ld dis(T x1,T y1,T x2,T y2){re sqrt((ld)(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}

void operator+=(vll &X,ll Y){for(ll &Z:X)Z+=Y;}
void operator-=(vll &X,ll Y){for(ll &Z:X)Z-=Y;}
void operator*=(vll &X,ll Y){for(ll &Z:X)Z*=Y;}
void operator/=(vll &X,ll Y){for(ll &Z:X)Z/=Y;}
void operator%=(vll &X,ll Y){for(ll &Z:X){Z%=Y;if(Z<0)Z+=Y;}}

sim > istream& operator>>(istream& in,ve<T>&V){for(T &e:V)in>>e;re in;}
sim > istream& operator>>(istream& in,ve<ve<T> >&V){for(ve<T>&e:V)for(T &ee:e)in>>ee;re in;}
sim , class Ta> istream& operator>>(istream& in,pair<T,Ta>&V){in>>V.ff>>V.ss;re in;}

sim > ostream& operator<<(ostream& ot,const ve<T>&V){for(T e:V)ot<<e<<' ';re ot;}
sim > ostream& operator<<(ostream& ot,const ve<ve<T> >&V){for(ve<T>e:V)ot<<e<<'\n';re ot;}
sim , class Ta> ostream& operator<<(ostream& ot,const pair<T,Ta>&V){ot<<V.ff<<' '<<V.ss<<'\n';re ot;}
sim , class Ta> ostream& operator<<(ostream& ot,const ve<pair<T,Ta> >&V){for(pair<T,Ta>e:V)ot<<e;re ot;}
sim > ostream& operator<<(ostream& ot,const set<T>&V){for(T X:V)ot<<X<<' ';re ot;}
sim , class Ta> ostream& operator<<(ostream& ot,const map<T,Ta>&V){for(auto X:V)ot<<X.ff<<' '<<X.ss<<endl;re ot;}

sim > void db(const char *X,T h){cout<<X<<" = "<<h<<endl;}
sim , class... TT> void db(const char *X,T h,TT... a){while(*X!=',')cout<<*X++;cout<<" = "<<h<<'\n';db(X+1,a...);}
sim > void dbln(const char *X,T h){cout<<X<<" =\n"<<h<<endl;}
sim , class... TT> void dbln(const char *X,T h,TT... a){while(*X!=',')cout<<*X++;cout<<" =\n"<<h<<'\n';db(X+1,a...);}


/*sim > void fwrite(ostream& os,const T& X){os<<X<<' ';}
sim, class... TT> void fwrite(ostream& os,const T& X,TT... tt){fwrite(os, X);fwrite(os, tt...);}
template<class... TT> void outt(TT... tt){fwrite(cout,tt...);exit(0);}
template<class... TT> void write(TT... tt){fwrite(cout,tt...);cout<<endl;}
freopen("input.txt","r",stdin);
substr(X,A,B) X.substr(A,B-A)*/

vll p2,fact,invs;
void pre(){
    //p2.resize(61); p2[0]=1; FORI(i,1,61) p2[i]=p2[i-1]*2;
    //fact.resize(21); fact[0]=fact[1]=1; FORI(i,2,21) fact[i]=fact[i-1]*i;
    //invs.resize(1e6+5); invs[1]=1; FORI(i,2,1e6+5) invs[i]=MODI-MODI/i*invs[MODI%i]%MODI;
}


//#define Extend
struct Solution{
    void solve(){
        vll a(8); cin>>a;
        ll ml=a[1]*a[2];
        ll sl=a[3]*a[4];
        ll mn=min(sl,min(ml/a[6],a[5]/a[7]));
        cout<<mn/a[0];
    }
};

int main() <% Extend Your Imagination Bye %>
