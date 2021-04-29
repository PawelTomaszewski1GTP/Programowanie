#include <iostream>
#include <fstream>


using namespace std;


ifstream plik;


int a;
int b;


int main(int argc, char** argv) {

	plik.open("C:\\folder\\plik.txt");

	while(!plik.eof())   

     {

         plik>>a;

         if(a>=b)

         {

         	a=b;

         	cout<<"a jest wieksze od b ";

		 }
     }

	cout<<b;
	
	return 0;
}