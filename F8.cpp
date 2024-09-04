#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;

void swap(char &a, char &b){
    int tmp=a;
    a=b;
    b=tmp;
}

void reverse(char s[]){
    int n= strlen(s);
    for(int i=0,j=n-1; i<j; i++,j--) swap(s[i],s[j]);
}

int main(){

    char s[mx];
    cin>>s;
    reverse(s);
    cout<<s<<endl;;

return 0;
}



