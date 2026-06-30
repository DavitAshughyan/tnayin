#include <iostream>

int main() {

    int arr[10];
    std::cout<<"Enter the numbers: "<<std::endl;
    int i=0;
    
    for(i=0; i<10; i++){
        std::cin>>arr[i];
    }
    
    int minValue = arr[0];
    int maxValue = arr[9];
    
    for(i=0; i<10; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
        } 
    }
    
    for(i=0; i<10; i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
        } 
    }
    
    std::cout<<"Minimum is = "<<minValue<<std::endl;
    std::cout<<"Maximum is = "<<maxValue<<std::endl;
    
}
