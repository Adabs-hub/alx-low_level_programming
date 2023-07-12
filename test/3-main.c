#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    printf("0");
    ht = hash_table_create(1024);
    printf("1");
    hash_table_set(ht, NULL, "cool");
    printf("2");
    hash_table_set(ht, "betty", NULL);
    printf("3");
    hash_table_set(ht, "", "cool");
    printf("4");
    hash_table_set(ht, "betty", "");
    printf("5");
    hash_table_set(ht, "betty", "cool");
    printf("6");
    hash_table_set(ht, "hetairas", "first quat");
    printf("7");
    hash_table_set(ht, "mentioner", "second quat");
    printf("All done");
    return (EXIT_SUCCESS);
}
