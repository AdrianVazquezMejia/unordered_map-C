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

	size_t size = 10;
	unordered_map_t* test_hash_table = new_unordered_map(size);

	int test_key = 1;
	int* expected_value =NULL;
	int* actual_value = NULL;
	printf("here Main\n");

	actual_value =unordered_map_find(test_hash_table,test_key);

	printf("Actual value [%p] and expected value [%p]\n",actual_value,expected_value);
	delete_map(test_hash_table);

	printf("Success");
}
