#include <stdio.h>

int main()
{
    int m = 0;
   
    do
    {
    printf("Введіть розмірність масиву: ");
    scanf("%d", &m);
    } while(m <= 0);
   
    int array[m];

    for (int i = 0; i < m; i++)
    {
        printf ("Введіть %d елемент масиву\n", i+1);
        scanf("%d", &array[i]);
    }
   
    int gen = array[0];
   
    for (int i = 1; i < m; i++)
    {
        if (gen == array[i])
        {
            if (i+1 < m)
            {
                gen = array[i+1];
            }
        }
    }
   
    int n = 0;
   
    for (int i = 0; i < m; i++)
    {
        if (gen == array[i])
            n++;
    }
   
    if (n > 1)
        printf("Самотнього не знайдено\n");
    else
        printf("Пара для числа %d не знайдена\n", gen);
       
    return 0;
}