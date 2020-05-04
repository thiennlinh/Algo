#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long n,k;
long long  Mul(long long a, long long b){
	if(b==0) return 0;
	long long temp= Mul(a,b/2);
	if(b&1) return (temp*2+a)%mod;
	return temp*2%mod;	
}
long long Pow(long long n, long long k){
	
	if(k==0) return 1;
	if(k==1) return n%mod;
	long long temp=Pow(n,k/2);
	long long a=Mul(temp,temp);
	if(k&1) return a*n%mod;
	return a%mod;
}
int main(){
	int t;
	cin>>t;
	while(t>0){
	t--;
	cin>>n>>k;
	cout<<Pow(n,k);
	cout<<endl;
	}	
}
