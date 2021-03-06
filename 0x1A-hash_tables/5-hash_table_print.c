#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int j;

	j = 0;
	if (ht == NULL)
		return;
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
		while (ht->array[i] != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			j = 1;
			ht->array[i] = ((ht->array[i])->next);
		}
	printf("}\n");
}
