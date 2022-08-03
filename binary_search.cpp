#include <bits/stdc++.h>
using namespace std;
const int maxn =1e6+10;
int arr[maxn];
bool check() {
    return true;
}

bool binary_search1(int l,int r) {
    while (l<r) {
        int mid=l+r>>1;
        if(check()) {
            r=mid;
        }else {
            l=mid+1;
        }
    }
}

bool binary_search2(int l, int r) {
    while (l<r) {
        int mid = l+r+1>>1;
        if(check()) {
            l=mid;
        }else {
            r=mid-1;
        }
    }
}

int mySearch(int x,int l,int r) {
    int i=l,j=r;
    while (i<j) {
        int mid=i+j+1>>1;
        if(arr[mid]<=x) {
            i=mid;
        }else {
            j=mid-1;
        }
    }

    if(arr[i]!=x) {
        cout<<-1<<" "<<-1<<endl;
    } else {

        while (l<r) {
            int mid=l+r>>1;
            if(arr[mid]>=x) {
                r=mid;
            }else {
                l=mid+1;
            }
        }
        cout<<l<<" "<<i<<endl;
    }


}

int main() {
    int n,sum;
    cin>>n>>sum;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for(int i=0;i<sum;i++) {
        int temp;
        cin>>temp;
        mySearch(temp,0,n-1);
    }

}