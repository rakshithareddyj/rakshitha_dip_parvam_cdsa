#include <stdio.h>
struct address {
    char street[20];
    char city[20];
    char state[20];
};
struct person {
    int age;
    float marks;
    char name[20];
    struct address addr;
};
int main() {
    struct person p1;
    printf("\nEnter Your Details:\n");
    printf("Name: ");
    scanf("%19s", p1.name);
    printf("Age: ");
    scanf("%d", &p1.age);
    printf("Marks: ");
    scanf("%f", &p1.marks);
    printf("Street: ");
    scanf("%19s", p1.addr.street);
    printf("City: ");
    scanf("%19s", p1.addr.city);
    printf("State: ");
    scanf("%19s", p1.addr.state);
    printf("\nYour Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Marks: %.2f\n", p1.marks);
    printf("Street: %s\n", p1.addr.street);
    printf("City: %s\n", p1.addr.city);
    printf("State: %s\n", p1.addr.state);

 return 0;
}