#include <iostream>

int main() {

    int arr[10];
    std::cout<<"Enter the numbers: "<<std::endl;
    int i=0;
    
    for(i=0; i<10; i++){
        std::cin>>arr[i];
    }
    for(i=0; i<10; i++){
        std::cout<<i+1<<"element - "<<arr[i]<<std::endl;
    }
}
