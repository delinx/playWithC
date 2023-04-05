#include <stdio.h>

// Define struct outside of the function
typedef struct Rectangle {
    int area;
    int perimeter;
} Rectangle;

// Function that creates and returns a struct
Rectangle areaOfRectangle(int width, int height) {
    // Create and initialize struct
    Rectangle rect;
    rect.area = width * height;
    rect.perimeter = width * 2 + height * 2;

    // Return struct
    return rect;
}

int main() {
    // Call function and store returned struct in a variable
    Rectangle obj = areaOfRectangle(7, 5);

    // Access struct members
    printf("Perimeter of the rectangle is: %d\n", obj.perimeter);
    printf("Area of the rectangle is: %d\n", obj.area);

    return 0;
}
