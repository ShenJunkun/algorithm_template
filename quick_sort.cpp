#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5;
int arr[maxn]={5,4,3,2,1};

void quick_sort(int arr[],int l,int r) {
    if(l>=r) return;
    int i=l-1,j=r+1,x=arr[l+r>>1];
    while (i<j) {
        do i++; while (arr[i]<=x);
        do j--; while (arr[j]>x);
        if(i<j) {
            swap(arr[i],arr[j]);
        }
    }
    quick_sort(arr,l,j);
    quick_sort(arr,j+1,r);

}


int main() {
    int n;
    n=5;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}