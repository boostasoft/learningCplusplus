#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h>
/* concat prend en entree deux entiers et les concaternes
*/

using namespace std;

int main()
{

//char c = '0';
int b = 12;
int d = 34;
int r;
//double a = 1.1;

char s[2000];
char u[2000];
char *v;

//sprintf(s, "%c", c);cout<<s <<endl; // conversion d'un char vers char*
sprintf(s, "%o", b);cout<<s<<endl;
sprintf(u, "%o", d);cout<<u<<endl; // conversion d'un int vers char*
//sprintf(s, "%lf", a);cout<<s<<endl; // conversion d'un double vers char*
v=strcat( s,u);// concaterne les 2 chaines
cout<< v;
r = atoi( v); // reconvertir les 2 chaines entier
cout<< "voici l'entier"<< r<< endl;

cout << "Hello world!" << endl;

    return 0;
}
