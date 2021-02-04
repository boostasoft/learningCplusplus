#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// cette fonction permet de prendre en entree deux entier  en base 8
// et les concanterne en inserant un 9
using namespace std;

int main ()
{
//char c = '0';
int b = 166;
int d = 33;
int j=9;
int r;
//double a = 1.1;

char s[2000];
char u[2000];
char x[2000];
char *v;
char *y;

//sprintf(s, "%c", c);cout<<s <<endl; // conversion d'un char vers char*
sprintf(s, "%o", b);cout<<s<<endl;
sprintf(u, "%o", d);cout<<u<<endl;
sprintf(x, "%d", j);cout<<x<<endl;
// conversion d'un int vers char
//sprintf(x, "%d", j);cout<<u<<endl;
//sprintf(s, "%lf", a);cout<<s<<endl; // conversion d'un double vers char*
v=strcat( s,x);// concaterne les 2 chaines
y=strcat( v,u);
cout<< v;
r = atoi( y); // reconvertir les 2 chaines entier
cout<< "voici l'entier"<< r<< endl;

cout << "Hello world!" << endl;
    return 0;
}
