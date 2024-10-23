#include<stdio.h>
struct stud 
{
  char name [25];
  float marks;
};

main()
{
  struct struct s1 = {"Name", 56};
  show(s1);
}

show(struct stud m)
{
  printf("%s", m.name);
  printf("%f", m.marks);
  return (0);
}
