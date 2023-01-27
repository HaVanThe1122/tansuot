#include <bits/stdc++.h>
using namespace std;
 

 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pi> vii;
typedef set<int> si;
typedef set<string> ss;
typedef map<int,int> mii;
typedef map<int,string> mis;
typedef map<string,int> msi;


const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
void ch(string &s){
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
}
 
  void cong(string a, string b){


int main(){
	string s; getline(cin,s);
	// map<char,int> mp;
	// for(char x:s){
	// 	mp[x]++;
	// }
	// for(auto x:mp){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }
	int a[256]={0};
	for(char x:s){
		if(isalnum(x))
		a[x]++;
	}
	for(int i=0;i<256;i++){
		if(a[i]>=1){
			cout<<char(i)<<setw(4)<<a[i]<<endl;
		}
	}
    
    return 0;
}
