#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void set_arr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = -1;
	}
}

void
print_arr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr, len);
	print_arr(arr,len);
	return 0; 
}
