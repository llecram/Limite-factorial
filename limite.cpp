#include <iostream>
int main(){
	int a,x;
	a=14; //en este valor el factorial no es correcto
	x=1;
	for(int i=1; i<a ; i+=1)
	{
	  x=x*(i+1);
	  std::cout<<"\n"<<x;
	}
}
