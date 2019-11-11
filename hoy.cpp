#include <iostream>

int main(void)
{
    int a=5;
    std::cout<< "Los primeros" <<a<<"numeros de la serie Fibonacci son:" <<fibonacciFor(a)<<"\n";
    return 0;
}

int* fibonacciFor(int a)
{
    int* fibo[a];
    for (int i = 0; i <a; i++)
    {
        if (i == 0 || i == 1)
        {
            fibo[i] = i;
        }
        else
        {
            fibo[i] = fibo[i-1] + fibo [i-2];
        }
        
    }
    
    return fibo;
}