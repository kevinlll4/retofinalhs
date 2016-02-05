#include <bits/stdc++.h>
bool m[1000000];
int tam=1000000;
using namespace std;

void criba(){
    m[0] = false;
    m[1] = false;
    for(int i = 2; i <= tam; ++i) 
        m[i] = true;

    for(int i = 2; i*i <= tam; ++i) {
        if(m[i]) {
            for(int h = 2; i*h <= tam; ++h)
                m[i*h] = false;
        }
    }
}
int main(){
int n;
cin>>n;
criba();
int cont=0;
for(int i=0;i<=n;i++){
	if(m[i])cont++;
}
cout<<cont<<endl;
return 0;
}