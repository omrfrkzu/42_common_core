#include "libft.h"

// Bellek kopyalama fonksiyonu
void *ft_memcpy(void *b, const void *a, size_t len)
{
    size_t i;
    
    // Eğer kopyalanacak uzunluk 0 ise veya kaynak ve hedef adresler aynı ise, işlem yapma
    if (len == 0 || b == a)
        return (b);

    // Karakter dizisinin elemanlarını birbirine kopyalama
    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = ((unsigned char *)a)[i];
        i++;
    }
    return (b);
}

/*

#include <stdio.h>

int main(void)
{
    char src[] = "This is the source string.";
    char dest[50];
    
    // ft_memcpy ile kopyalama
    ft_memcpy(dest, src, sizeof(src));
    
    // Kopyalanan diziyi yazdırma
    printf("Kopyalanan dizi: %s\n", dest);
    
    return 0;
}

*/