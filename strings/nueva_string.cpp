#include <iostream>
#include <string.h>
using namespace std;
main(){
    
std::string cadena{"juan es mi amigo"};
std::string objetivo{"es mi amigo"};
std::string porcion{"es mi pana"};
int size = porcion.size();
int pos = cadena.find("es mi amigo");  
if (pos != std::string::npos){
    cadena.replace(pos, size, porcion, substr(0, size));
}
std::cout<< cadena << std::endl;

}

