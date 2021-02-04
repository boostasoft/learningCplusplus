#include <iostream>

using namespace std;

int main()
{
    int i =0;
    char ** chaine;
    while ( &chaine[i] != NULL)
       ++i;

    cout << "Hello world!" << endl;
    return 0;
}
