#include "libft.h"

// Verilen karakteri karakter dizisinde arayan fonksiyon
char *ft_strchr(const char *src, int a)
{
    while (*src != '\0' && (char)a != *src)
        src++;
    if ((char)a == *src)
        return (char *)src;
    return NULL;
}

/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, world!";
    int c = 'o';

    // Verilen karakterin karakter dizisindeki konumunu bulma
    char *result = ft_strchr(str, c);

    // Sonucu ekrana yazdırma
    if (result != NULL)
        printf("'%c' karakteri '%s' içinde bulundu: %s\n", c, str, result);
    else
        printf("'%c' karakteri '%s' içinde bulunamadı.\n", c, str);

    return 0;
}
*/