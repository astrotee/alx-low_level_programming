CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89 -g

a: 0-main.c 0-hash_table_create.c
	gcc $(CFLAGS) -o $@ $^
b: 1-main.c 1-djb2.c
	gcc $(CFLAGS) -o $@ $^
c: 2-main.c 1-djb2.c 2-key_index.c
	gcc $(CFLAGS) -o $@ $^
d: 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c
	gcc $(CFLAGS) -o $@ $^
e: 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c
	gcc $(CFLAGS) -o $@ $^
f: 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c
	gcc $(CFLAGS) -o $@ $^
g: 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c
	gcc $(CFLAGS) -o $@ $^
sht: 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c
	gcc $(CFLAGS) -o $@ $^
