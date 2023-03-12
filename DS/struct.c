#include <stdio.h>

struct stud
{
    int usn;
    char name[20];
    int m1,m2,m3;
};

int main()
{
    typedef struct stud s;
    s s1;
    printf("Enter name:");
    scanf("%s",s1.name);
    printf("Enter USN:");
    scanf("%d",&s1.usn);
    printf("Name:%s\nUSN:%d",s1.name,s1.usn);
    return 0;
}