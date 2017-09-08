#include <iostream>
int main(){
	int i,a,x,c;
	a=14;//un valor aleatorio para el hallar su factorial
	
	x=1;//donde se multiplican los valores para el factorial
	c=0;//el contador
	for( i=1; i<a+1 ; i++)//las iteraciones para multiplicar los numeros
	{
	  x=x*(i);
	  std::cout<<"\n"<<x;
	  if(x%i==0){//esta condicion es para que el contador identifique hasta que numero el factorial es correcto
	    c=c+1;//el contador que a cada vuelta y que cumpla con la condicion sumara 1
	  }
	    
	 
	 }
  std::cout<<"\n"<<"el limite de factorial es:"<<c;
}
