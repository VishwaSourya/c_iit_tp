# include<stdio.h>
 # include<string.h>
 int main () {
 char source [] = "Hello , World !";
 char destination [50]; // Buffer to hold copied string
 char toAppend [] = " How are you ?";

 // 1. strcpy : Copy source string to destination
 strcpy ( destination , source );
 printf (" After strcpy , destination : %s\n", destination );

 // 2. strcat : Concatenate strings
 strcat ( destination , toAppend );
 printf (" After strcat , destination : %s\n", destination );

 // 3. strlen : Find length of string
 printf (" Length of destination : %zu\n", strlen ( destination ));

 return 0;
 }