#include <stdio.h>
#include <stdlib.h>
int main(int argc, char**argv){
  if(argc!=2){
    printf("usage: %s <number_of_lines_to_eat>\n", argv[0]);
    exit(1);
  }
  long to_eat = atoi(argv[1]);
  char buffer[10240] = "";
  while(fgets(buffer, sizeof(buffer), stdin))
    if (to_eat) to_eat--;
    else        fputs(buffer,stdout);
}
