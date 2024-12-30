#include<stdio.h>
int main() {
char name[20] = "AVANI";
int i;
for (i=10; i<20; i++) {
name[i] = 'X';
}
printf("name = %s\n", name);
for (i=0; i<20; i++) {
printf("%c %d\n", name[i], name[i]);
}
}