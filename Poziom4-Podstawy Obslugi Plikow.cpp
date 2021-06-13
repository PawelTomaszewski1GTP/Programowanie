#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool szukaj( string & tekst, string szukane )
{
    
    size_t znalezione = tekst.find( szukane );
   
    if( znalezione != string::npos )
         return true;
         
    else
         return false;
   
}

bool wczytajPlik( string nazwaPliku )
{
    bool znaleziono = false;
    
    ifstream plik;
    
    plik.open( nazwaPliku.c_str() );
    
    if( !plik.good() )
         return false;
   
    while( plik.good() )
    {
        
       cout << "Co chcesz wyszukaæ?";
       
        string a;
        
        cin >> a;
        
        string wiersz;
        
        while( getline( plik, wiersz ) )
        
        if( szukaj( wiersz, a ) ) {
            
            cout << wiersz << endl;
            
            znaleziono = true;
            
        }
    }
   
    if( !znaleziono )
    
         cout << "Nie znaleziono" << endl;
   
    plik.close();
   
    return true;
}

int main()
{
    
    if( wczytajPlik( "odczyt.txt" ) != 1 )
        cout << "Blad!";
   
    return 0;
}
