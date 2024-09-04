#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;

    return;

}

int main(){
    int a=10, b=20;
    swap(a,b);
    cout<<" a = "<<a<<" b = "<<b<<endl;

return 0;
}


