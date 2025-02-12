#include <iostream>
using namespace std;

int main(){
    double arr[] = {7,5,6,12,35,27};
    double sum = 0;
    int count = 0;
    //const: read only
    //&i: direct access --> better efficiency
    for(const double&i: arr){ 
        sum+=i;
        count++;
    }

    cout<<"Sum: "<<sum<<endl;
    cout<<"Avg: "<<sum/count<<endl;
}