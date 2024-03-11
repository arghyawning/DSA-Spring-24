/// Data Structure for Hash Map

// Replace int with the type of data you want to store in the hash map.
typedef int T;

typedef struct ht_node {
    T key;
    int value;
    struct ht_node *next;
} ht_node;

typedef struct hash_map {
    ht_node **buckets;
    int size;
    int default_value;
} hash_map;

// Change the hash function as you want. Currenty (ax+ b) mod size for integers.
int get_hash(T key, int size) {
    return (14071LL * key + 21347LL) % size;
}

hash_map *create_hash_map(int size) {
    hash_map *new_hash_map = (hash_map *) malloc(sizeof(hash_map));
    new_hash_map->buckets = (ht_node **) malloc(size * sizeof(ht_node *));
    new_hash_map->size = size;
    // Change the default value as you want.
    new_hash_map->default_value = 0;
    for (int i = 0; i < size; i++) {
        new_hash_map->buckets[i] = NULL;
    }
    return new_hash_map;
}

void insert(hash_map *hm, T key, int value) {
    int index = get_hash(key, hm->size);
    ht_node* head = hm->buckets[index];
    while (head != NULL) {
        if (head->key == key) {
            head->value = value;
            return;
        }
        head = head->next;
    }
    ht_node *new_node = (ht_node *) malloc(sizeof(ht_node));
    new_node->key = key;
    new_node->value = value;
    new_node->next = hm->buckets[index];
    hm->buckets[index] = new_node;
}

int search(hash_map *hm, T key) {
    int index = get_hash(key, hm->size);
    ht_node* head = hm->buckets[index];
    while (head != NULL) {
        if (head->key == key) {
            return head->value;
        }
        head = head->next;
    }
    return hm->default_value;
}
