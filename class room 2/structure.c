#include<stdio.h>
#include<string.h>
struct classroom
{
   char dar[100];
   int n;
};
typedef struct classroom classroom;
int main()
{
    classroom c;
    // c.dar="darshan";
    strcpy(c.dar,"Kamlesh Joshi");
    c.n= 200;
    printf("%d %s",c.n,c.dar);
}
