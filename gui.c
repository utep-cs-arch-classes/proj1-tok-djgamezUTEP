#include <stdio.h>
#include <stdlib.h>


void main(){
  char *userIn=(char*)malloc(64); /*this is where we will store out read data*/
  printf("$");
  fgets(userIn, 64, stdin);  /*stdin  reading from standard input*/
  
  printf("%s", userIn);/*format userIn to print*/
}
