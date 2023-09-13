#include <unistd.h>
char    *ft_strupcase(char *str)
{
    int a;
    a = 0;
    while (str[a] != '\0')
    {
        if (str[a] >= 'a' && str[a] <= 'z')
        {
           str[a] -=32;
        }
        a++;
    }
    return (str);
}


#include <stdio.h>
int main()
{
    char str[7] = "ron\0ldo";
    //ft_strupcase(str);
    printf("%s\n",str);
    //write(1, str,7);
    char s[5];
    s[0]='m';
    s[1]='e';
    s[2]='r';
    s[3]='t';
    printf("%s\n",s);
    printf("%p\n",s);
    printf("%p\n",str);
    printf("%c",*(s+5));
    return (0);
}
