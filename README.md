# OrderedMap
Simple ordered map implementation in C acting with binary search (O(logn) complexity).

## Initializing:
```C
MAP* dct = create_map();
```
## Set entries:
```C
map_set(dct, "Name", "Ilbounce");
map_set(dct, "Age", 18);
```
## Get entry:
```C
char* name = map_get_value(dct, "Name");
```
## Delete entry:
```C
map_delete_key(dct, "Age");
```
## Check entry existing:
```C
int key_status_name = map_check_key(dct, "Name");
```
## Destroy map:
```C
destroy_map(dct);
```
