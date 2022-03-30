#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,4,3,21,11,1};
    int *ptr = &arr[0];
    cout<<arr<<" "<< arr[0]<<endl;
    cout<<*(arr+1)<<" "<<1[arr]<<endl;
    cout<<sizeof(&arr)<<" "<<sizeof(arr)<<" "<<sizeof(&ptr)<<endl;
    char temp = 'z';
    char *p= &temp;
    cout<< p << endl;

}