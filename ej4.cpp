#include <iostream>

int main(void)
{
    int x=1;
    int y=2;
    double a=1.0;
    double b=2.0;
    std::cout<< getMaxInt(x,y)<<"\n";
    std::cout<< getMaxDouble(a,b)<<"\n";
    return 0;
}

int getMaxInt(int a,int b)
{
  if(a>b)
  {
   return a;
  }
   else
   {
       return b;
   }
}


double getMaxDouble(double a, double b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
