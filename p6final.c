#include <stdio.h>

int string_length(char *s)
{
  int i;
  for(i=0;s[i]!='\0';i++);
  return i;
}

int string_ncmp(char *s1,char *s2)
{
  for(int i=0; i<n && s1[i]==s2[i] && s1[i] != '\0';i++);
  return s1[i] - s2[i];
}


int string_index(char *s, char *subs)
{
  int l1=string_lenght(s);
  int l2=string_lenght(subs);
  if l1 < l2
      return -1;
  for(int i=0;i<l1-l2;i++)
    if (string_nscmp(s,subs))
      return i;
  return -1;
}

/* Understand and debug the functions and write main */