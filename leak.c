#include <stdio.h>
int main(void){
char *p = malloc(100);
int i=0;
while(i<200){
p=(char *)malloc(i);
printf("%s\n", p);
}
return 0;
}
