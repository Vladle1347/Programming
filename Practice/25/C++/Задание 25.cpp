#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort1(void)
{
    // 2D array
    char strings[][40] = {
        "Yeah?",
        "Tomorrow",
        "Again",
        "I will see you"
    };
    const int el_size = sizeof(strings[0]);
    const int el_count = sizeof(strings) / el_size;
    int i;
    printf("\n%s\n", __FUNCTION__);
    qsort(strings, el_count, el_size, strcmp);
    for (i = 0; i < el_count; ++i) {
        printf("%s\n", strings[i]);
    }
}

int strcmp_ptr(const char** a, const char** b)
{
    return strcmp(*a, *b);
}

void sort2(void)
{
    // Array of pointers to string constants
    const char* strings[] = {
        "Yeah?",
        "Tomorrow",
        "Again",
        "I will see you"
    };
    const int el_size = sizeof(strings[0]);
    const int el_count = sizeof(strings) / el_size;
    int i;
    printf("\n%s\n", __FUNCTION__);
    qsort(strings, el_count, el_size, strcmp_ptr);
    for (i = 0; i < el_count; ++i) {
        printf("%s\n", strings[i]);
    }
}

int main(void)
{
    sort1();
    sort2();
    return 0;
}