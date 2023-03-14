#include <stdio.h>
#include "Map.h"

void main(char* args, char** kvargs) 
{
	//Create map
	MAP* dct = create_map();
	//Insert in map
	map_set(dct, "Name", "Ilbounce");
	map_set(dct, "Age", 18);
	
	//Get value by key
	char* name = map_get_value(dct, "Name");

	for (int i = 0; i < 8; i++) {
		printf("%c", name[i]);
	}

	printf(" Age: %d\n", map_get_value(dct, "Age"));

	//Delete key-value pair from map
	map_delete_key(dct, "Age");

	//Check entry in map
	int key_status_name = map_check_key(dct, "Name");
	int key_status_age = map_check_key(dct, "Age");
	
	if (key_status_name) {
		printf("Name is in the dict\n");
	}

	if (!key_status_age) {
		printf("Age is not in the dict\n");
	}
	//Delete map
	destroy_map(dct);
}