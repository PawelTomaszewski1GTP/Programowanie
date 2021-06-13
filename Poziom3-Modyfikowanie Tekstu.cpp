#include <iostream>
#include <string>

using namespace std;
 
string convert(string & word)
{

    size_t x = word.find(' '); 
    
    while(x != string::npos)
    {
        
        while(word.at(x+1) == ' ')
        {
            
            word.erase(x,1);
            
        }
        
        x = word.find(' ', x+1);
        
    }
 
    size_t x2 = word.find('<');
    size_t x3 = word.find('>');
    
    while (x2 != string::npos && x3 !=string::npos)
    
    {
        
        word.replace(x2, 1, "[");
        word.replace(x3, 1, "]");
        
        x2 = word.find('<', x2+1);
        x3 = word.find('>', x3+1);
        
    }
 
    return word;
    
}

int main()

{
    
    string word="zadanie        na      poprawe              zagrozenia      <b>    </b>";
    
    convert(word);
    cout<<word;
    
    return 0;
}
