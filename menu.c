#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int a,b;
int main(int argc, char *argv[]) 
{
	
	printf("Wybierz:\n 1 Zaokraglij \n 2 system szesnastkowy \n 3 zera \n 4 koniec \n :");
	
	cin>>a;
	
	printf("Podaj liczbe\n");
	
	cin>>b;
	
	switch(a){
		
	    case 1:
	    printf("Zaokraglij; %.2f \n", b);
	    break;
	    
	    case 2:
	    printf("System szesnastkowy: %x \n",b);
	    break;
	    
	    case 3:
	    printf("Zera: %06d \n", b);
	    break;
	    
	    case 4:
	    printf("koniec");
	    break;
	   
	}
	
	
	return 0;
}
