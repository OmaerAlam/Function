#include<bits/stdc++.h>
using namespace std;
int a,b;

void swap(){
    int tmp=a;
    a=b;
    b=tmp;

    return;

}

int main(){
    a=10,b=20;
    swap();
    cout<<" a = "<<a<<" b = "<<b<<endl;

return 0;
}

