//============================================================================
// Name        : FirstCpp.cpp
// Author      : Adri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include "unordered_map.h"
int main(){
	printf("Adrian\n");
	size_t expected_size = 10;

	unordered_map_t* test_hash_table = new_unordered_map(expected_size);
	int expected_key = 0;
	int expected_value =1;


	unordered_map_insert(test_hash_table,expected_key,expected_value);
	unordered_map_insert(test_hash_table,10,10);


	item_t* second_item = (item_t*)test_hash_table->hash_table_[0]->next_;
	printf("Sencond value %d\n",second_item->value_);

	delete_map(test_hash_table);

	printf("Success");
}
