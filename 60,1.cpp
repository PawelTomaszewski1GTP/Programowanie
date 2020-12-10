#include <iostream>

#include <fstream>



using namespace std;


int dane;

class files {

   ifstream fileIn;
   ofstream fileOut;

  public:
   files();
   ~files();
   void loop();
}


	
	
files::files()
{

   fileIn.open("c:\\liczby.txt");
   fileOut.open("c:\\wynik.txt")

     if (!fileIn.good())
     cerr << "Error fileIn not exists!!!!\n";
   if (!fileOut.good())
     cerr << "Error cannot create fileOut!!!\n";
}

files::~files()
{
   fileIn.close();
   fileOut.close();
}

void files::loop()
{

  while(!fileIn.eof())        
     {

               fileIn>>dane; 

                if(dane>1000)

                {

                fileOut<<dane<<endl;

                cout<<dane<<endl;

				}

              
     }
}



main()
{



  files dane;
  dane.loop();
  return 1;
}