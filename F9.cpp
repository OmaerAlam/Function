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

bool isPalindrome(char s[]){
    char tmp [mx];
    int n= strlen(s);
    for(int i=0; i<n; i++) tmp[i] = s[i];
    reverse(s);

    for(int i=0; i<n; i++) if(s[i] != tmp[i]) return 0;

    return 1;
}

int main(){

    char s[mx];
    cin>>s;
    if(isPalindrome(s)) cout<<"Palindrome"<<endl;
    else cout<<"No Palindrome"<<endl;

return 0;
}




