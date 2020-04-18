#include<bits/stdc++.h>

using namespace std;
void result(int s[],int i){
    cout <<'(';
    for(int j=0;j<i;++j){
        cout << s[j]<<" ";
    }
    cout <<s[i]<<')'<<" ";
}
void sinh(int a,int s[],int i,int k){
    for(int j=k;j>=1;j--){
        s[i]=j;
        if(s[i]==a) result(s,i);
        else if(s[i]<a){
            int b=a-s[i];
            sinh(b,s,i+1,s[i]);
        }
    }
}
int main(){
    int t;
    int a;
    cin >> t;
    while (t--)
    {
        
        cin >> a;
        int s[100]={};
        sinh(a,s,0,a);
        cout << endl;
    }
    return 0;
}
