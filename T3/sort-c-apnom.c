#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int comp(char* nom0, char* nom1)
{
  char* pesp; //puntero a char
  pesp = nom0; //puntero al primer char del nombre actual
  while (*pesp!=' '){ //apunta a algo que no es ' '
    pesp++;
  } //queda apuntando al espacio

  char* pnextesp;
  pnextesp = nom1;
  while (*pnextesp!=32){
    pnextesp++;
  }

  int ans = strcmp(pesp, pnextesp);

  if (ans != 0)
  {
    return ans;
  }

    ans = strcmp(nom0, nom1);
    return ans;


}

void sort(char **noms, int n) {
  char **ult= &noms[n-1]; //puntero al puntero al primer char del ultimo nombre
  char **p= noms; //puntero al puntero al primer char del nombre actual
  while (p<ult) {
    int ans = comp(p[0], p[1]);
    
    if (ans <= 0)
    {
      p++;
    }
    else
    {
      char *tmp= p[0];
      p[0]= p[1];
      p[1]= tmp;
      p= noms;
    }

  }
}
