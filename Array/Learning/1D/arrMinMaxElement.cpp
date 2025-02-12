#include <iostream>
using namespace std;
void printMin(int arr[5]);
void printMax(int arr[5]);
int main(){
    int arr1[5] = { 30, 10, 20, 40, 50 };    
    int arr2[5] = { 5, 15, 25, 35, 45 }; 

    //min
    printMin(arr1);
    printMin(arr2);

    //max
    printMax(arr1);
    printMax(arr2);
}

void printMin(int arr[5]){
    int min = arr[0];
    for(int i=1;i<5;i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"Min: "<<min<<endl;
}

void printMax(int arr[5]){
    int max = arr[0];
    for(int i=1;i<5;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Max: "<<max<<endl;
}