#include <iostream>

int main() {

    int arr[10];
    std::cout<<"Enter the numbers: "<<std::endl;
    int i=0;
    int sum=0;
    
    while(i<10){
    std::cin>>arr[i];
    sum=sum+arr[i];
    i++;
    }
    
    std::cout<<"Average value = "<<sum/i<<std::endl;
}