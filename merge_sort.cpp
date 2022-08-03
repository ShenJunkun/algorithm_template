#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int arr[maxn];

void merge_sort(int arr[],int l,int r) {
    if(l>=r) return;
    int mid=l+r>>1;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    int temp[maxn];
    int k=0,i=l,j=mid+1;
    while (i<=mid && j<=r) {
        if(arr[i]<arr[j])  {
            temp[k++]=arr[i++];
        }else {
            temp[k++]=arr[j++];
        }
    }
    while (i<=mid) {
        temp[k++]=arr[i++];
    }
    while(j<=r) {
        temp[k++]=arr[j++];
    }
    for(int i=0;i<k;i++) {
        arr[l+i]=temp[i];
    }
}

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

}