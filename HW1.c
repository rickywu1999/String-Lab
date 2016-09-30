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
  int n = 0;
  for(;s1[n] == s2[n]; n++){
    if (!(s1[n] && s2[n])){
      return (s1[n] - s2[n]);
    }
  }
  return s1[n] - s2[n];
}

char * mystrchr( char *s, char c ){
  int n = 0;
  int size = mystrlen(s);
  for(;(s[n] != c)&&(n<size);n++);
  if (n == size){
    return NULL;
  }
  return &s[n];
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

  char c[20] = "hi";
  printf("STRCAT TEST\n");
  printf("\tString c: %s \n",c);
  strcat(c,"ssssss");
  printf("\t\tCat ssssss into c...\n");
  printf("\tString c: %s \n\n",c);

  char c2[20] = "hi";
  printf("MYSTRCAT TEST\n");
  printf("\tString c2: %s \n",c2);
  mystrcat(c2,"de");
  printf("\t\tCat de into c2...\n");
  printf("\tString c2: %s \n\n",c2);

  char d[20] = "hello world";
  char e[20] = "hello world";
  char f[20] = "hello stars";
  printf("STRCMP TEST\n");
  printf("\tString d: %s \n",d);
  printf("\tString e: %s \n",e);
  printf("\tString f: %s \n",f);
  int ans = strcmp(d,e);
  printf("\t\tComparing d and e...\n");
  printf("\tReturns: %d \n",ans);
  int ans2 = strcmp(d,f);
  printf("\t\tComparing d and f...\n");
  printf("\tReturns: %d \n\n",ans2);

  char d2[20] = "hello world";
  char e2[20] = "hello world";
  char f2[20] = "hello stars";
  printf("MYSTRCMP TEST\n");
  printf("\tString d2: %s \n",d2);
  printf("\tString e2: %s \n",e2);
  printf("\tString f2: %s \n",f2);
  int ans3 = mystrcmp(d2,e2);
  printf("\t\tComparing d2 and e2...\n");
  printf("\tReturns: %d \n",ans3);
  int ans4 = mystrcmp(d2,f2);
  printf("\t\tComparing d2 and f2...\n");
  printf("\tReturns: %d \n\n",ans4);

  char g[20] = "abcdefghij";
  printf("STRCHR TEST\n");
  printf("\tString g: %s \n",g);
  char* res = strchr(g,'e');
  printf("\t\tSearching for \"e\" in g...\n");
  printf("\tReturn: %p \n",res);
  char* res2 = strchr(g,'z');
  printf("\t\tSearching for \"z\" in g...\n");
  printf("\tReturn: %p \n\n",res2);

  char g2[20] = "abcdefghij";
  printf("MYSTRCHR TEST\n");
  printf("\tString g2: %s \n",g2);
  char* res3 = mystrchr(g2,'e');
  printf("\t\tSearching for \"e\" in g2...\n");
  printf("\tReturn: %p \n",res3);
  char* res4 = mystrchr(g2,'z');
  printf("\t\tSearching for \"z\" in g2...\n");
  printf("\tReturn: %p \n\n",res4);
  return 0;
}
