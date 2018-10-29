#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h> 
int main(void) {
  char *c = (char *) calloc(100, sizeof(char)); 
  int file = open("hasan.ahnaf.txt",O_RDWR);
  int something= write(file, "apples and oranges\n",strlen("apples and oranges\n"));
  printf("what integer represents file?/ What is the file descriptor?\n%d\n", file);
  printf("How many bytes were written?\n%d\n",something);
  close(file);
  int file2 = open("hasan.ahnaf.txt",O_RDWR);
  printf("what integer represents file2?/ What is the file descriptor?\n%d\n", file2);
  int duh=read(file2, c, 100);
  printf("How many bytes were read?\n%d\n",duh);
  printf("What is hidden within file??!\n%s\n", c);

 close(file);
  return 0;
}
