#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>

using namespace std;

void usage();

int main(int argc, char *args[]) {
    
    cout <<  "Executing positive portsetter tests..." << endl;
    cout << endl;
    setenv("PATH", " ./", 1);
    system("~/workspace/Portsetter/portsetter.cpp.o");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -h");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --help");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p 4040");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --port 4040");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -v");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --version");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -?");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --about");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -!");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --port -e");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p -e PORT");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --port -e MY_PORT");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p -e YOUR_PORT");
    cout << endl;
    cout << "Done with positive tests." << endl;
    cout << endl;
    
    
    cout <<  "Executing negative portsetter tests...\n";
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o help");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -help");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --h");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -h --help");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -hs");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p --port 9");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p 77 33");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p -21");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p 0");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o --port");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p 90642");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -x 45321");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -P 714");
    cout << endl;
     system("~/workspace/Portsetter/portsetter.cpp.o -p -e 9090");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p -e PO");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -about");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -version");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p -e RUINF");
    cout << endl;
    system("~/workspace/Portsetter/portsetter.cpp.o -p -E");
    cout << endl;
    cout << "Done with negative tests." << endl;
    cout << endl;
    cout << "Portsetter test completed..." << endl;
}

