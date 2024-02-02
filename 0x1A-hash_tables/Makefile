CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89 -g

a: 0-main.c 0-hash_table_create.c
	gcc $(CFLAGS) -o $@ $^
b: 1-main.c 1-djb2.c
	gcc $(CFLAGS) -o $@ $^
c: 2-main.c 1-djb2.c 2-key_index.c
	gcc $(CFLAGS) -o $@ $^
d: 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c
	gcc $(CFLAGS) -o $@ $^
