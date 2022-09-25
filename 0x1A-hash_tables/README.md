<h3> Tasks </h3>
<h3>Write a function that creates a hash table.</h3>
<ol>
<li>Prototype: hash_table_t *hash_table_create(unsigned long int size);</li>
<li>where size is the size of the array</li>
<li>Returns a pointer to the newly created hash table</li>
<li>If something went wrong, your function should return NULL</li>
</ol>
<br>
<h3>Write a hash function implementing the djb2 algorithm.
</h3>
<ol>
<li>Prototype: unsigned long int hash_djb2(const unsigned char *str);</li>
<li>You are allowed to copy and paste the function from this page</li>
</ol>
<h3>Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size)</h3>
<ol>
<li>Prototype: hash_table_t *hash_table_create(unsigned long int size);</li>
<li>This function should use the hash_djb2 function that you wrote earlier</li>
<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
<li>You will have to use this hash function for all the next tasks</li>
</ol>
<br>
<h3>Write a function that adds an element to the hash table</h3>
<ol>
<li>Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);</li>
<li>Returns: 1 if it succeeded, 0 otherwise</li>
<li>n case of collision, add the new node at the beginning of the list</li>
</ol>
<br>
<h3>Write a function that retrieves a value associated with a key</h3>
<ol>
<li>Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);</li>
<li>Returns the value associated with the element, or NULL if key couldn’t be found</li>
</ol>
<br>
<h3><a href ="5-hash_table_print.c">Write a function that prints a hash table.</h3>
<ol>
<li>Prototype: void hash_table_print(const hash_table_t *ht);</li>
<li>You should print the key/value in the order that they appear in the array of hash table <br>
Order: array, list</li>
<li>If ht is NULL, don’t print anything</li>
</ol>
<br>
