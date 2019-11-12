#include <iostream>


int fibonacciRecursive(int n);

int main(void){
    int numeroNumeros;
    std::cout<<"Ingrese cuantos numeros de la serie Fibonacci se van a calcular"<<std::endl;
    std::cin>>numeroNumeros;
    for(int i=1;i<numeroNumeros+1;i++){
        std::cout<<fibonacciRecursive(i)<<std::endl;
    }
    
    return 0;
    
}
int fibonacciRecursive(int n){
    int number;
    if(n>2){
        number=fibonacciRecursive(n-1)+fibonacciRecursive(n-2);
        return number;
    }
    else if(n==2){
        return 1;   
    }
    else{
        return 0;
    }
        
      
}