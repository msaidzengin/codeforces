#include<bits/stdc++.h> 
#define inf 0x7fffffff
typedef long long ll;
using namespace std;
const ll mod =998244353; 
inline ll read(){
	ll x=0,f=1;char ch=getchar();
	while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int t,mx;
int n,m,k,cnt;
int l[100005],r[100005];
struct p{
	int w,op,id;
}w[200005];
bool cmp(p a,p b){
	if(a.w==b.w) return a.op<b.op;
	return a.w<b.w;
}
int f[200005][260],one[1025],Q[13];
int main(){
	int i,j;
    //freopen("a.out","w",stdout);
    n=read(),m=read(),k=read();
    for(i=1;i<=n;i++) {
    	l[i]=read(),r[i]=read();
    	w[++cnt].w=l[i],w[cnt].op=1,w[cnt].id=i;
    	w[++cnt].w=r[i]+1,w[cnt].op=-1,w[cnt].id=i;
    }
    sort(w+1,w+cnt+1,cmp);
    for(j=0;j<=cnt;j++) for(i=0;i<(1<<k);i++) f[j][i]=-inf;
	for(i=1;i<(1<<k);i++) one[i]=one[i-(i&-i)]^1;
    f[0][0]=0;
    for(i=1;i<=k;i++) Q[i]=-1;
    int now=0;
	for(i=1;i<=cnt;i++){
    	int st=-1;
    	if(w[i].op==1){
    		for(j=1;j<=k;j++) 
				if(Q[j]==-1) {st=j,Q[j]=w[i].id;break;}
    		for(j=0;j<=now;j++)if((j&now)==j){
    			f[i][j]=max(f[i][j],f[i-1][j]+one[j]*(w[i].w-w[i-1].w));
                f[i][j|(1<<(st-1))]=max(f[i][j|(1<<(st-1))],f[i-1][j]+one[j]*(w[i].w-1-w[i-1].w)+((one[j]+1)&1));
    		}
    		now|=(1<<(st-1));
    	}
    	else{
    		for(j=1;j<=k;j++) 
				if(Q[j]==w[i].id) {st=j,Q[j]=-1;break;}
            now^=(1<<(st-1));
            for(j=0;j<=now;j++)if((j&now)==j){
    			f[i][j]=max(f[i][j],f[i-1][j]+one[j]*(w[i].w-w[i-1].w));
                f[i][j]=max(f[i][j],f[i-1][j|(1<<(st-1))]+((one[j]+1)&1)*(w[i].w-1-w[i-1].w)+one[j]);
            }
    	}
    }
    printf("%d\n",f[cnt][0]);
}