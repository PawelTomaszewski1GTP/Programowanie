#include <iostream>

#include <fstream>  
  
using namespace std;


int main()
{
     int liczba;
     
    ofstream l1; 
    
	ifstream l2;  
	                   
    l1.open("plik1.txt");  
	                    
    l2.open("D:\\Programy C++\\plik2.txt");  
    
    
    
     while(!l2.eof())        
            {
            	
            	l2>>liczba;
            	
            if (liczba%2 == 0 ) cout <<l2; 
            
            
            }
            
    l1.close();
    
   	l2.close();
   	
   	
   	
   	
    return 0;
}
