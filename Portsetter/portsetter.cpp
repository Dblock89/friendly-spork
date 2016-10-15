#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include "lang.h"

using namespace std;

void usage();
void about();
void invalidInputError();
string getEnvLang(string);
const int PORT_NUM = 3123;
const int MY_PORT_NUM = 4567;
const int YOUR_PORT_NUM = 7654;
const string port = "PORT";
const string myPort = "MY_PORT";
const string yourPort = "YOUR_PORT";
string globalLocale;

int main(int argc, char *args[]) {
    
    string version = ".003";
    Lang lang;
    
    lang.setLanguage(getEnvLang(globalLocale));
    
    
    if ( argc == 1) {
        
        string setport = args[0];
        string setportString 
        = "/home/ubuntu/workspace/Portsetter/portsetter.cpp.o";
        
        if ((setport.compare("./portsetter.cpp.o")== 0) 
        || (setport.compare(setportString) == 0)) {
            cout << __("Displaying Usage...") << endl;
            usage();
            return 0;
        }
        
        else {
            invalidInputError();
            usage();
            return 223;
        }
        
    }
    
    if (argc == 2) {
        
        string arg = args[1];
        
        if (arg[0] != '-') {
            cout << __("Invalid input first argument must be - ") << endl;
            usage();
            return 9;
        }
        
        if (arg.compare("-!") == 0 || arg.compare("--about") == 0) {
            cout << __("Displaying About...") << endl;
            about();
            return 0;
        }
        
        if (arg.compare("-v") == 0 || arg.compare("--version") == 0) {
            cout << __("Version ") + version << endl;
            return 0;
        }
        
        if (arg.compare("-h") == 0 || arg.compare("--help") == 0 
        || arg.compare("-?") == 0) {
            cout << __("Displaying Usage...") << endl;
            usage();
            return 0;
        }
        
        else {
            
            invalidInputError();
            usage();
            return 223;
        }
        
    }
    
    if (argc == 3) {
        
    	string arg = args[1];
    	string pNum = args[2];
     
        if (arg[0] != '-') {
           
            cout << __("Invalid input first argument must be - ") << endl;
            usage();
            return 9;
        }
       
        if (arg.compare("-p") == 0 || arg.compare("--port") == 0) {
            
            if (pNum.compare("-e") == 0)
            {
                cout << __("Listening on port ") << PORT_NUM << endl;
                return 0;
            }
                    
            int pNumValue = 0;
            stringstream convert(pNum);
            convert >> pNumValue;
      
            if (pNumValue < 1 || pNumValue > 65000) {
                cout << __("Invalid Port!") << endl;
                cout << __("Port number must be 1-65000 can be 1 and 65000") 
                << endl;
                usage();
                return 22;
            }
            
            else {
                cout << __("Listening on port ") << pNumValue << endl;
                return 0;
            }
        }
        
        else {
            invalidInputError();
            usage();
            return 223;
        }
    }
    
    if (argc == 4){
        
        string arg = args[1];
    	string pNum = args[2];
    	string setPort = args[3];
     
        if (arg[0] != '-') {
           
            cout << __("Invalid input first argument must be - ") << endl;
            usage();
            return 9;
            
        }
       
        if (arg.compare("-p") == 0 || arg.compare("--port") == 0) {
            
            if (pNum.compare("-e") == 0) {
                
                if (setPort.compare(port) == 0) {
                    cout << __("Listening on port ") << PORT_NUM << endl;
                    return 0;
                    
                }
            
                if (setPort.compare(myPort) == 0) {
                    cout << __("Listening on port ") << MY_PORT_NUM << endl;
                    return 0;
                
                }
            
                if (setPort.compare(yourPort) == 0) {
                    cout << __("Listening on port ") << YOUR_PORT_NUM << endl;
                    return 0;
                }
                else {
                    invalidInputError();
                    usage();
                    return 223;
                    
                }
            }
        }
   }
   
   return 0;
    
}



void usage() {
    
    Lang lang;
    lang.setLanguage(getEnvLang(globalLocale));
    string line;
    ifstream usageFile("portsetter.usage_en.txt");
    
    if (usageFile.is_open()){
         
        while (getline(usageFile,line)) {
            
            cout << __(line) << endl;
            
        }
            usageFile.close();
        
    }
    
    else cout << "unable to open file" << endl;
}

void about() {
    
    Lang lang;
    lang.setLanguage(getEnvLang(globalLocale));
    string line;
    ifstream aboutFile("portsetter.about_en.txt");
    
    if (aboutFile.is_open()){
         
        while (getline(aboutFile,line)) {
            
            cout << __(line) << endl;
            
        }
            aboutFile.close();
        
    }
    
    else cout << "unable to open file";
}

void invalidInputError() {
    Lang lang;
    lang.setLanguage(getEnvLang(globalLocale));
    cout << __("Invalid input see usage.") << endl;
    
}

string getEnvLang(string locale)
{
    string language;
    char arr[4][20] = {"LANGUAGE", "LC_ALL", "LC_MESSAGES", "LANG" };
    
    for(int i = 0; i < 4; i++)
    {
        locale = getenv(arr[i]);
        
        if (locale.compare("es") == 0)
        {
            break;
        }
        else if (locale.compare("") == 0 || locale.compare(NULL) == 0 || 
        locale.compare("C") == 0|| locale.compare("C.UTF-8") == 0)
        {
            cout << "Missing translation files. Using English" << endl;
            language = "en";
            locale = language;
            break;
        }
        
    }
    return locale;
}

