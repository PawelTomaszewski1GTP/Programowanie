#include <iostream>

#include <fstream>


using namespace std;


int main()
{
	
	
	
     string imie="Jan";
     
     string nazwisko="Kowalski";
     
     string id="1";  
     
     
     
  
    ofstream wyjscie;  
	                
    wyjscie.open("a.json");          
    
    
    
    
  plik << " [  \n { \n \"imie\" : \" " << imie ;
  
  plik << " [  \n { \n \"nazwisko\" : \" " << nazwisko ;
  
	plik << " [  \n { \n \"id\" : \" " << id ;
	
	plik.close();
    
    
    
    cout<<endl;
    
    system("PAUSE");
    
    
    
    
    return 0;
}
