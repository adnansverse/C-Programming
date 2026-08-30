#include <stdio.h>

int main() {
    
    int width, length, road_width, area;
    int total_width, total_length, total_area;

    printf("Enter the width of the garden :");
    scanf("%d", &width);

    printf("Enter the length of the garden :");
    scanf("%d", &length);

    
    printf("Enter the width of the road surrounding the garden :");
    scanf("%d", &road_width);

    area = width * length;
    printf("The area of the garden :%d\n", area);

    total_width = width + (2 * road_width);
    total_length = length + (2 * road_width);

    
    total_area = total_width * total_length;

    printf("The total area covered by the garden and the surrounding road is :%d square meters\n", total_area);

    return 0;
}

