#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *read_line(void)
{
  char *ip = malloc(sizeof(char) * 10);
  scanf("%s", ip);
  printf("You entered a command: %s\n", ip);
  return ip;
}


void csh_loop(void)
{
  char *line;

  do {
	printf("cool shell > ");
	line = read_line();
	/* args = parse_line(line);
	status = execute(args); */

 } while (strcmp(line,"exit"));
}

int main(int argc, char **argv)
{
  csh_loop();

  return EXIT_SUCCESS;
}
