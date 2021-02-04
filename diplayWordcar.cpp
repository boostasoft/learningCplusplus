#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()

{    int i=0;
     char chaine[]="bonjour ";
     char chain[10];
  /* parcourir les caractères de l'option */
      while (chaine[i] !=' ')
      {
          chain[i]= chaine[i];
          cout<< chain [i];
          i++;
      }

    cout << "Hello world!" << endl;
    return 0;
}
