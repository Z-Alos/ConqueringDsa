#include <iostream>
using namespace std;

int main(){
    //traverse-1D-arr
    int arr[5]={10,0,20,0,30};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }

    //foreach taversal
    for (int i: arr){
        cout<<i<<endl;
    }

    //insert value: arr
    arr[3]=69;

    //take input from user to store value at third pos
    cin >> arr[2];

    for (int i: arr){
        cout<<i<<endl;
    }
    cout<<endl;
}