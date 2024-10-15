// #include <stdio.h>
// void main()
// {
//     char string[40];
//     int length = 0, flag = 1, i;

//     printf("Enter string:\n");
//     gets(string);

//     for (i = 0; string[i] != '\0'; i++)
//     {
//         length++;
//     }

//     for (i = 0; i < length / 2; i++)
//     {
//         if (string[i] != string[length - 1 - i])
//         {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag == 1)
//     {
//         printf("PALINDROME");
//     }
//     else
//     {
//         printf("NOT PALINDROME");
//     }
// }

#include <stdio.h>
int main()
{
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}
