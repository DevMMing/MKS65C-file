#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h> 
int main(void) {
  char *c = (char *) calloc(100, sizeof(char)); 
  int file = open("hasan.ahnaf.txt",O_RDWR);
  int something= write(file, "apples and oranges\n",strlen("apples and oranges\n"));
  close(file);
  int file2 = open("hasan.ahnaf.txt",O_RDWR);
  printf("%d\n",file2);
  int duh=read(file2, c, 100);
  printf("c = % s\n", c);

 close(file);
  return 0;
}
