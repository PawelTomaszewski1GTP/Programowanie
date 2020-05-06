#include <iostream>

#include <fstream>


using namespace std;


int main()
{
	
	ifstream wejscie;
	
	ofstream wyjscie;
	
	
	
	wejscie.open("wejscie.txt");
	
	wyjscie.open("wyjscie.txt");
	
	
	int x[10];
	
	
	if (wejscie.good())
	{
		while(!wejscie.eof())
		
		for(int a=0; a<10; a++)
		
		wejscie>>x[a];
	}
		
		
		int naj=x[0];
		
		
		for(int a=0; a<10; a++)
		{
			if(naj<x[a])
			
			naj=x[a];
		}
		
		
		wejscie.close();
		
		wyjscie.close();
		
		
		
		return 0;
	
		
	
	
}

