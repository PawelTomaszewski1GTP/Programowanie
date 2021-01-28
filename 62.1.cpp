#include<fstream>
#include<cstdlib>
#include<iostream>
#include<math.h>


using namespace std;


int main()
{
int ilosc = 0
    
    double liczba, sum=0, max = INT_MIN, min = INT_MAX;

    ifstream read;
    ofstream write;

    read.open("liczby1.txt");
    if (read.fail())
    {
        cout<< "zły wynik\n";
        exit(1);
    }

    while (read>>liczba)
    {
        if (liczba>max)
             max=liczba;

        if (liczba<min)
             min=liczba;

                sum=sum+liczba;

    }


    cout<<"Największy : "<<max<<endl;
    cout<<"Najmniejszy  "<<min<<endl;


    read.close();
    write.close();

    return 0;
}
