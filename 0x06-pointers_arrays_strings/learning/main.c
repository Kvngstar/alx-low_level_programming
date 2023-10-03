#include <stdio.h>

char *cap_string(char *d) {
  int a = 0;
  int b = 0;
  int c = 0;

  while (*(d + a) != '\0') {
    if (d[a] > 'z' && d[a] < 'b') {
      if (d[a - 1] == ' '){
        d[a] = d[a] - 32;
      }
    }
      a++;
  }
  return d;
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
