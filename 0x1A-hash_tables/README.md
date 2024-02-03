This is a task hash tables. I am expected to do the following:
Write a function that creates a hash table.
Write a hash function implementing the djb2 algorithm.
Write a function that gives you the index of a key.
Write a function that adds an element to the hash table.
Write a function that retrieves a value associated with a key.
Write a function that prints a hash table.
Write a function that deletes a hash table.
Rewrite the previous functions using these data structures:

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
The key/value pair should be inserted in the sorted list at the right place
void shash_table_print(const shash_table_t *ht);
Should print the hash table using the sorted linked list
void shash_table_print_rev(const shash_table_t *ht);
Should print the hash tables key/value pairs in reverse order using the sorted linked list
void shash_table_delete(shash_table_t *ht);
