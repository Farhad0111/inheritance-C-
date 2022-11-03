/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Farhad{
  int id;
  string name;
    public:
        void faru(){
            cout<<"Enter the id: ";
            cin>>id;
            cout<<"Enter your name: ";
            cin>>name;   
        }
        void display(){
            cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl;
        }
};

class Farhad1:private Farhad{
    string course;
    int fee;
    public:
        int faru1(){
            faru();
            cout<<"Enter Your Course: ";
            cin>>course;
            cout<<"Amount of fee :";
            cin>>fee;
        return 0;
    }
    int display1(){
        display();
        cout<<"Course: "<<course<<endl<<"Fee: "<<fee<<endl;
        return 0;
    }
};

int main(){
    Farhad1 farhad1=Farhad1();
    farhad1.faru1();
    farhad1.display1();
    return 0;
}