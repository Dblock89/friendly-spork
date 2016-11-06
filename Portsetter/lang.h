#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <map>

#define __(word) lang.translate(word)

using namespace std;

class Lang {
    
    private:
        string _language;
         map<string, map<string, string> > _words;
         
    public:
        Lang();
        string translate(string word);
        void setLanguage(string language);
};  

 
  Lang::Lang(){
      
    _language = "en";
     _words["es"]["Invalid input first argument must be - "] = 
     "Entrada no válida primer argumento debe ser - ";
     _words["es"]["Displaying About..."] = "Viendo Acerca de ...";
     _words["es"]["Displaying Usage..."] = "Mostrar uso ...";
     _words["es"]["Version "] = "Versión ";
     _words["es"]["Listening on port "] = "Escucha en el puerto ";
     _words["es"]["Invalid Port!"] = "Puerto no válido!";
     _words["es"]["Port number must be 1-65000 can be 1 and 65000"] = 
     "Número de puerto debe ser 1-65000 1 y 65000";
     _words["es"]["unable to open file"] = "no se puede abrir archivo";
     _words["es"]["Usage:"] = "Uso:";
     _words["es"]["Invalid input see usage."] = "Entrada no válida ver su uso.";
     _words["es"]["Input example: setport -p 345"] = 
     "ejemplo de entrada: conjunto de puertos -pe 345";
     _words["es"]["               setport -h"] = 
     "                    conjunto de puertos -hache";
     _words["es"]["               setport --help"] = 
     "                    conjunto de puertos -ayuda";
     _words["es"]["               setport -p -e PORT"] = 
     "                    conjunto de puertos -p -e PUERTO";
     _words["es"]["               setport --port -e -MY_PORT"] =
     "                    conjunto de puertos --puerto -e -MI_PUERTO";
     _words["es"]["               setport -p --environment"] =
     "                    conjunto de puertos --puertos --environment";
     _words["es"]["               setport --port --environment"] =
     "                    conjunto de puertos --puertos --environment";
     _words["es"]["-h, -?,  --help     opens usage displays command information."] = 
     "-hache, -?,  --ayuda       abre uso comando muestra información.";
     _words["es"]["-p,  --port         commands to use for declaring or calling a port."] = 
     "-p,  --puerto              los comandos a utilizar para declarar y llamar a un puerto.";
     _words["es"]["-e,  --environment [PORT]        calls the default port"] = 
     "-e,  -e PUERTO             pide el puerto por defecto";
     _words["es"]["-!, --about         opens about message"] = 
     "-!, --acerca de            se abre sobre el mensaje";
     _words["es"]["-v , --version      displays current version"] = 
     "-uve , --versión           muestra la versión actual";
     _words["es"]["PORT            calls port number 3114"] =
     "PUERTO                llamadas puerto número 3114";
     _words["es"]["MY_PORT         calls port number 4567"] =
     "MI_PUERTO             llamadas puerto número 3123";
     _words["es"]["YOUR_PORT       calls port number 7654"] =
     "TU_PUERTO             llamadas puerto número 7654";
     _words["es"]["PORT_BAR_NUM    calls port number 3116"] =
     "BAR_PUERTO             llamadas puerto número 3116";
     _words["es"]["Code 223     Invalid Input"] = 
     "Código 223     Entrada inválida";
     _words["es"]["Code 22      Port Number Invalid"] = 
     "Código 22      Puerto número inválida";
     _words["es"]["Code 9       Invalid First Argument"] = 
     "Código 9       Inválida Primer Argumento";
     _words["es"]["Code 0       Success"] = "Código 0       Éxito";
     
     _words["es"]["About:"] = "Acerca de:";
     _words["es"]["Created by:"] = "Creado por:";
     _words["es"]["            Darrell Valenzuela "] = 
     "            Darrell Valenzuela";
     _words["es"]["            Student at Utah Valley University"] = 
     "            Estudiante de la Universidad del Valle de Utah";
     
 }
 

 
 string Lang::translate(string word) {
     
     string value = _words[_language][word];
     
     if (value == "" ) {
       return word;   
     }
     else {
         return value;
     }
     
 }
 void Lang::setLanguage(string language) {
     _language = language;
 }
 
