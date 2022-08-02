#include <bits/stdc++.h>
using namespace std;

const int maxn=1001;

int h[maxn],ne[maxn],e[maxn];
int idx=0;
int add(int a, int b) {
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

int isVisit[maxn];

void dfs(int u) {
    isVisit[u]=true;
    for(int i=h[u];i!=-1;i=ne[i]) {
        int j=e[i];
        if(!isVisit[j])
            dfs(j);
    }
}


int main() {
    fill(h,h+maxn,-1);
}