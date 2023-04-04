#include <stdio.h>

void print_anything(void *ptr, size_t data_size) {
    printf("Size of the variable is %zu bytes\n", data_size);

    switch (data_size)
    {
    case 1:
        printf("%c\n", *(char*)ptr);
        break;
    case 4:
        printf("%d\n", *(int*)ptr);
        break;
    case 8:
        printf("%f\n", *(double*)ptr);
        break;
    default:
        printf("Error: print_anything() not a valid data size");
        break;
    }
}

int main()
{
    char age_str[10];
    int age;

    printf("Enter your age: ");
    fgets(age_str, 10, stdin); // read up to 9 characters from the user
    age = atoi(age_str); // convert the string to an integer

    printf("Your age is: %d\n", age);
    print_anything(&age, sizeof(age));
}