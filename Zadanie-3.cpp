#include <iostream>
#include <fstream>   

using namespace std;

int main()
{
    string t[500]; 
    
    ifstream plik2;
    string a;
    int licznik=0;
    
    plik2.open("c:\\a.txt");  
    
    if(plik2.good())  
   
	while(!plik2.eof())        
                         { 
                             
			 t[licznik]=a; 
			 
                plik2>>a;          
                cout << licznik++ << ":" << a;
                cout<<endl;
                         
                         }
    plik2.close();
   
 
    return 0;
}