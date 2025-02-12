#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {
        {2,5,5},
        {4,0,3},
        {9,1,8}
    };

    //traverse:
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}