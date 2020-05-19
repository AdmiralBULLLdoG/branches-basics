#include <stdio.h>
int string_to_int(char array[])
{
    int des = 0;
    int i, sum = 0;
    for (i = 0; i < 5; i++) {
        if (array[i] >= '0' && array[i] <= '9') {
            des = array[i] - '0';
            sum = (sum + des) * 10;
        }
        sum /= 10;
    }
    return sum;
}
int main()
{
    int i;
    int result;
    char array[5];
    printf("Введите массив: \n");
    for (i = 0; i < 5; i++) {
        scanf("%c ", &array[i]);
    }
    result = string_to_int(array);
    printf("Результат: ");
    printf("%d \n", result);
}