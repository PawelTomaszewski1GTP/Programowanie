#include <iostream>
#include <string>

using namespace std;

int a= 5;

struct uczen
{

        string imie, nazwisko;
        int numer;

};


    int main(int argc, char** argv) {
    uczen t[5];
    
    for(int i =0; i<5; i++){

        cout <<i<< endl;
        cout<< "wpisz imie";
        cin >> t[i].imie;
        cout<< "wpisz nazwisko";
        cin >> t[i].nazwisko;
        cout<< "wpisz numer";
        cin >> t[i].numer;

    }

    cout<< "id";
    cout<< "\t imie";
    cout<< "\t nazwisko";
    cout<< "\t numer"<<endl;
    
    for(int
     i=0; i<5;i++){

    cout << i;
    cout<< "\t "<<t[i].imie;
    cout<< "\t "<<t[i].nazwisko;
    cout<< "\t\t"<<t[i].numer<<endl;

    }

    return 0;
}