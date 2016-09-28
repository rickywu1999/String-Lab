#include <stdio.h>
#include <string.h>

int mystrlen(char s[]);
char * mystrncpy( char *dest, char *source ,int n);
char * mystrcat( char *dest, char *source );
int mystrcmp( char *s1, char *s2 );
char * mystrchr( char *s, char c );

int mystrlen(char s[]){
  int i = 0;
  for(;s[i];i++);
  return i;
}

char * mystrncpy( char *dest, char *source ,int n){
  int a = 0;
  for (;a<n;a++){
    dest[a] = source[a];
  }
  return dest;
}

char * mystrcat( char *dest, char *source ){
  int a = mystrlen(dest);
  int b = mystrlen(source);
  int n = 0;
  for (;n<b;n++){
    dest[a] = source[n];
    a++;
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
}

char * mystrchr( char *s, char c ){
}

int main(){
  char z[5] = "";
  char z2[5] = "Hi";
  printf("STRLEN TEST\n");
  printf("\tString z: %s\n", z);
  printf("\tLength of z: %d\n", (int)strlen(z));
  printf("\tString z2: %s\n", z2);
  printf("\tLength of z2: %d\n\n", (int)strlen(z2));

  char z3[5] = "";
  char z4[5] = "Hi";
  printf("MYSTRLEN TEST\n");
  printf("\tString z3: %s\n", z3);
  printf("\tLength of z3: %d\n", (int)strlen(z3));
  printf("\tString z4: %s\n", z4);
  printf("\tLength of z4: %d\n\n", (int)strlen(z4));
  
  char a[20] = "hello world";
  char b[20] = "trolololol";
  printf("STRNCPY TEST\n");
  printf("\tString a: %s \n",a);
  printf("\tString b: %s \n",b);
  strncpy(a,b,5);
  printf("\t\tCopying first 5 char of a into b...\n");
  printf("\tString b: %s \n\n",b);

  char a2[20] = "hello world";
  char b2[20] = "trolololol";
  printf("MYSTRNCPY TEST\n");
  printf("\tString a2: %s \n",a2);
  printf("\tString b2: %s \n",b2);
  mystrncpy(a2,b2,5);
  printf("\t\tCopying first 5 char of a2 into b2...\n");
  printf("\tString b2: %s \n\n",b2);

  char c[20] = "hi ";
  printf("STRCAT TEST\n");
  printf("\tString c: %s \n",c);
  strcpy(c,"Obama");
  printf("\t\tCat Obama into c...\n");
  printf("\tString c: %s \n\n",c);
}
