#include <iostream>
#include <math.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unistd.h>
#include <string.h>


using namespace std;

int main()
{

    char [20] [20] argv= "-u -m 1 -M 10 -n 100 -s 500 $ -p -2.2 -m 1 -M 100 -n 200 -s 500";

    char *** tab;
    //int  argc=13;

      tab[0]= (char**)malloc(100*sizeof(char**));
      tab[1]= (char**)malloc(100*sizeof(char**));

     int i=1;
     strcpy(tab[0][0],argv[0]);
     strcpy(tab[1][0],argv[0]);
//     tab[0][0]=argv[0];
//     tab[1][0]=argv[0];
     cout<< argv[0]<< "merci;";
  /* parcourir les arguments */

    while( i!= argc-1 && &argv != NULL) {

    ++i;
    ++argv;
    while ( argv[i][0] != '$'){
     tab[0][i] = (char*)malloc(sizeof(argv[i])*sizeof(char));
     strcpy(tab[0][i], argv[i]);
//     tab[0][i] =argv[i];
      ++i;
      ++argv;
//      strcpy(tab[0][i], argv[i]);
          }



    /* si le premier caractère de l'argument est '-'... */
    if (argv[i][0] == '$')
    {  int j;
        ++i;
        ++ argv;
      for ( j=i ; j!=argc-1 ; ++j){
                tab[1][j] = (char*)malloc(sizeof(argv[j])*sizeof(char));
  //               tab[1][j] =argv[j];
                  ++argv;
                  strcpy( tab[1][j], argv[j]);

                 }
         // i=j;
          //break;



    }


    }




   // cout << "Hello world!" << endl;

    cout << "Hello world!" << endl;

