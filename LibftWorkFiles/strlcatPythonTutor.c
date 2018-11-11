#include <strings.h>

size_t    ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

size_t    ft_strlcat(char *dst, const char *src, size_t dstsize) //man: Note that room for the NUL should be included in dstsize.
{
    char    *odst;
    char    *osrc;
    size_t    n;
    size_t    dlen;

    n = dstsize;
    osrc = (char*)src;
    odst = (char*)dst;
    while (n-- != 0 && *dst != '\0')
        dst++;
    dlen = dst - odst; // counts the distance between end of the dst /0 and beginning, so 5 from Hello
    n = dstsize - dlen; // n 13 minus 5 = 8. The total size that dstsize SAYS it is MINUS before the \0&smaller thatn dstsize. (The room to append)
    if (n-- == 0) // This is making sure that there is room to actually append src into dst. If there's 0 spaces left it can't append. Minus 1 because we still need 1 of the null terminators.
        return (dlen + ft_strlen(src)); // If was 0, it would just get the length of min(dstsize, strlen(dst)). We weren't able to append and this has a speical return like this.
    while (*src != '\0') //while src
    {
        if (n != 0) // while there's still room to append
        {
            *dst++ = *src; // dst starts with being at it's first \0. So then we can start setting from there, but the n-- above left us room to still have 1 null terminator left.
            n--; //ticking down how much space we have left to append into dst.
        }
        src++; // move through src
    }
    *dst = '\0'; //Make sure the last character is \0
    return (dlen + (src - osrc)); //the length of min(dstsize, strlen(dst)) MINUS (the amount of src we were able to append.)
}

int main() {
char ft_strlcat_dst3[13] = "Hello";
       char ft_strlcat_src4[] = "Goodbye";
    printf("\n        MINE: %zu", ft_strlcat(ft_strlcat_dst3, ft_strlcat_src4, 13));
    printf("\n        MINE: %s", ft_strlcat_dst3);
  return 0;
}
