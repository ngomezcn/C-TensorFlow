// C-TensorFlow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <tensorflow/c/c_api.h>


int main() {
	printf("Hello from TensorFlow C library version %s\n", TF_Version());
	return 0;
}
