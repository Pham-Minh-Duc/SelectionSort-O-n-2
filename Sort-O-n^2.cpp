#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int ar[],int n){
    int i,j,min;
    for(i=0; i < n-1; i++){

        min = i;

        for(j = i+1; j < n; j++){
            if(ar[j] < ar[min])
                min = j;
        }

        swap(ar[min],ar[i]);
    }
}

void xuat(int ar[],int n){
    cout<<"mang da sap xep: "<<endl;
    for(int i=0;i < n; i++){
        cout<<ar[i]<<"\t";
    }
}
int main(){
    int n;
    int ar[n];
    cout<<"nhap so luong phan tu mang: ";
    cin>>n;
    for(int i=0;i < n; i++){
        cout<<"phan tu ["<<i<<"]: ";
        cin>>ar[i];
    }
    selectionSort(ar,n);
    xuat(ar,n); 

    return 0;
}