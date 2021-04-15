#include <iostream>
#include <math.h>


int liczba1,liczba2;
char dzialanie;


int main()
{
    std::cout<<"Podaj pierwsza liczbe: ";
    
	std::cin>>liczba1;
    
	std::cout<<"Podaj druga liczbe: ";
    
	std::cin>>liczba2;
    

	std::cout<<"Wybierz działanie : 1.dodawanie, 2.odejmowanie, 3.mnozenie, 4.dzielenie, 5.reszta z dzielenia ";
    

	std::cin>>dzialanie;


    switch(dzialanie)


    {
        case '1':
            std::cout<<"Suma: "<<liczba1 + liczba2;
        break;

        case '2':
            std::cout<<"Roznica: "<<liczba1 - liczba2;
        break;

        case '3':
            std::cout<<"Iloczyn: "<<liczba1 * liczba2;
        break;

        case '4':
            std::cout<<"Iloraz: "<<liczba1 / liczba2;
        break;

        case '5':
            std::cout<<"Reszta: "<<liczba1 % liczba2;
        break;

        default: std::cout<<"Podaj numer od 1 do 5 ";  
    }

    return 0;
}