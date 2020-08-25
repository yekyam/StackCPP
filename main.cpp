#include <iostream>

template<typename T>
T *stack_create(int size) {
	T *ptr = new T[size];
	if (ptr == NULL) {
		printf("Couldn't allocate");
	}
	ptr[0] = size;
	ptr[1] = 0;
	return ptr;
}

template <typename T>
void stack_push(T *ptr, T x) {
	T size = ptr[0];
	T num_of_elm = ptr[1];
	
	if (num_of_elm >= size){
		printf("Stack too big!\n");
	} else {
	ptr[1]++;
	num_of_elm++;
	ptr[num_of_elm + 1] = x;
	}
}

template <typename T>
void stack_pop(T *ptr) {
	T size = ptr[0];
	T num_of_elm = ptr[1];

	if (num_of_elm > 0) {
	ptr[1]--;
	ptr[num_of_elm+1] = 0;
	}
	else {
		printf("Stack has no elems\n");
	}
}

template <typename T>
void stack_delete(T *ptr) {
	delete []ptr;
}

template <typename T>
T stack_get(T *ptr) {
	T size = ptr[0];
	T num_of_elm = ptr[1];

	if (num_of_elm > 0) {
	return ptr[num_of_elm+1];
	}
	else {
		printf("Nothing on stack\n");
		return -1;
	}
}

int main() {
  char *mystack = stack_create<char>(2);
	stack_push(mystack, 'A');
	stack_push(mystack, 'B');
	char test = stack_get<char>(mystack);
	std::cout<<test;
}