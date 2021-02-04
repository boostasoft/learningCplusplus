#include <iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int main()
{


    char ** argv;
    char ** tab[2];
    int  argc=13;

      tab[0] = (char**)malloc(20*sizeof(char));
      tab[1] = (char**)malloc(20*sizeof(char));

     int i=0;

  /* parcourir les arguments */

    while( i != argc) {
    ++i;
    tab[0][i] = (char*)malloc(sizeof(argv[i])*sizeof(char));
    tab[0][i] =argv[i];

    /* si le premier caractère de l'argument est '-'... */
    if (argv[i][0] == '|')
    {  int j;
         i++;
      for ( j=i ; j!=argc ; ++j){
                tab[1][j] = (char*)malloc(sizeof(argv[j])*sizeof(char));
                tab[1][j] =argv[j];
                 }
          i=j;

    }




    cout << "Hello world!" << endl;
    return 0;
}

    }
