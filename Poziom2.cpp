#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int Losowanie( int tab[], int x )
{
    
    for( int i = 0; i < x; i++ )
    {
        
        tab[ i ] =( rand() % 21 ) + 10;
        
    }
    return 0;
}

int wypisz( int tab[], int x )
{
    
    for( int i = 0; i < 10; i++ )
    {
        
      cout << "" << i+1 << " Liczba: " << tab[ i ] << endl;
      
    }
    return 0;
}

int wypiszOdTylu( int tab[], int x )
{
    
    int nine = x - 1;
    for( nine; nine >= 0; nine-- )
    {
        
        cout << "" << nine+1 << " Liczba: " << tab[ nine ] << endl;
        
    }
    return 0;
}

int znajdzNajmniejsza( int tab[], int x )
{
    int tab2[ 10 ];
    for( int i = 30; i > 10; i-- )
    {
        
        int j = 0;
        for( j; j < x; j++ )
        {
            
            int l = 0;
            if( tab[ j ] == i && l < 10 )
            {
                
                tab2[ l ] = tab[ j ];
                l++;
                
            }
           
        }
    }
    return tab2[ 0 ];
   
}

int znajdzNajwieksza( int tab[], int x )
{
    
    int tab3[ 10 ];
    for( int i = 10; i <= 30; i++ )
    {
        
        int j = 0;
        for( j; j < x; j++ )
        {
            
            int l = 0;
            if( tab[ j ] == i && l >= 0 )
            {
                
                tab3[ l ] = tab[ j ];
                l--;
                
            }
           
        }
    }
   return tab3[ 0 ];
}

void wypiszMinMax( int min, int max )
{
    
    cout << "Najmniejsza wylosowana liczba: " << min << endl;
    cout << endl;
    
    cout << "Najwieksza wylosowana liczba: " << max << endl;
    cout << endl;
   
    return;
}

int main()
{
    
    srand( time( NULL ) );
    
    int tablica[ 10 ];
    Losowanie( tablica, 10 );
    
    cout << "Wylosowane liczby:" << endl;
    wypisz( tablica, 10 );
    cout << endl;
    
    cout << "Wylosowane liczby od tylu:" << endl;
    wypiszOdTylu( tablica, 10 );
    cout << endl;
    
    int iMin = znajdzNajmniejsza( tablica, 10 );
    
    int iMax = znajdzNajwieksza( tablica, 10 );
    
    wypiszMinMax( iMin, iMax );
    
    
    return 0;
}