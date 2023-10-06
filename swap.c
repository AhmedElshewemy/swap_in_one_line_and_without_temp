#include<stdio.h>

int a=10;
int b=5;
 void main(void){

	int x=15;
	int y=20;
	SwapInOneLine(); 
	Swap_Without_Temp(&x,&y);	
   	}
   	
   


void SwapInOneLine(){
	a=(b=(a=a-b)+b)-a;
	}

void Swap_Without_Temp(int *x,int *y){
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	}


