#include "libft.h"

// İki karakter dizisini belirtilen uzunlukta karşılaştıran fonksiyon
int ft_strncmp(const char *str1, const char *str2, size_t a)
{
    size_t i;

    i = 0;
    while (i < a)
    {
        // Karakterlerin karşılaştırılması
        if (*str1 != *str2)
            return ((unsigned char)*str1 - (unsigned char)*str2);
        
        // Karakter dizilerinin sonuna gelindiğinde kontrol
        if (*str1 == '\0' && *str2 == '\0')
            return (0);
        
        // Sonraki karakterlere geç
        i++;
        str1++;
        str2++;
    }
    return (0);
}

/*
#include <stdio.h>

int main(void)
{
    const char *s1 = "Hello";
    const char *s2 = "Hello World";

    // İlk 5 karakteri karşılaştır
    int result = ft_strncmp(s1, s2, 5);

    // Karşılaştırma sonucunu ekrana yazdırma
    if (result == 0)
        printf("İlk 5 karakter aynı.\n");
    else if (result < 0)
        printf("İlk 5 karakter, s1'in 5. karakterinden küçük.\n");
    else
        printf("İlk 5 karakter, s1'in 5. karakterinden büyük.\n");

    return 0;
}
*/