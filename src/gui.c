#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100



int main(){
  char c;
  char input[LIMIT];
  int i=0;
  printf("$");
  while((c= getchar())!= '\n'){
    /* putchar(c);*/
    input[i]=c;
    }
  
  printf("%s \n",input);
  /* char *userIn=(char*)malloc(64); /*this is where we will store out read data
  printf("$");
  fcgets(userIn, 64, stdin);  /*stdin  reading from standard input
  
  printf("%s", userIn);/*format userIn to print*/
}
