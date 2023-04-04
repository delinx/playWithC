#include <stdio.h>
#include <stdlib.h>

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

char* reverseString(char name[], const size_t length) {
    printf("%zu\n", length);
    for (int i = 0; i < length-1; i++) {
        printf("PHASE %i: \n", i);
        char lastElement = name[length - 1];
        for (int j = length - 1; j > i; j--) {
            name[j] = name[j - 1];
            printf("name[%d] = %c\n", j, name[j]);
        }
        name[i] = lastElement;
        printf("name[%d] = %c\n", i, name[i]);
    }
    printf("%s\n", name);
    return name;
}

int main()
{
    char name[5] = "Miles";
    reverseString(name, sizeof(name));
    for (int i = 0; i < sizeof(name); i++) {
        printf("%c\n", name[i]);
    }
}