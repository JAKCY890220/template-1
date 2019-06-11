#include<iostream>
using namespace std;
template<typename T = int>

class Stack

{

public:

	Stack();

	bool empty();

	T peek();

	T push(T value);

	T pop();

	int getSize();



private:

	T *elements;

	int size;

	int capacity;

	void ensureCapacity();

};
template<typename T >

Stack<T>::Stack() : size(0), capacity(16)

{
	elements = new T[capacity];

}
template<typename T>

bool Stack<T>::empty()

{
	return (size == 0);
}
template<typename T>
T Stack<T>::peek()
{
	return elements[size - 1];

}
template<typename T>

T Stack<T>::push(T value)
{
	ensureCapacity();
	return elements[size++] = value;
}
template<typename T>

void Stack<T>::ensureCapacity()
{
	if (size >= capacity)
	{
		T *old = elements;

		capacity = 2 * size;

		elements = new T[size * 2];
		for (int i = 0; i < size; i++)

			elements[i] = old[i];
		delete old;
	}
}
template<typename T>

T Stack<T>::pop()

{
	return elements[--size];
}
template<typename T>
int Stack<T>::getSize()
{
	return size;
}
int main()
{
	Stack<char> stack;
	for (int i = 0; i < 9; i++) {
		char a;
		cin >> a;
		stack.push(a);
	}
	int x = stack.pop() - '0';
	char y = stack.pop();
	int z = stack.pop() - '0';
	int sum;
	if (y == '+')
		sum = z + x;
	if (y == '-')
		sum = z - x;
	if (y == '*')
		sum = z * x;
	if (y == '/')
		sum = z / x;
	cout << sum << endl;
	stack.push(sum + '0');
	x = stack.pop() - '0';
	y = stack.pop();
	z = stack.pop() - '0';
	if (y == '+')
		sum = z + x;
	if (y == '-')
		sum = z - x;
	if (y == '*')
		sum = z * x;
	if (y == '/')
		sum = z / x;
	cout << sum << endl;
	stack.push(sum + '0');

	x = stack.pop() - '0';
	y = stack.pop();
	z = stack.pop() - '0';
	if (y == '+')
		sum = z + x;
	if (y == '-')
		sum = z - x;
	if (y == '*')
		sum = z * x;
	if (y == '/')
		sum = z / x;
	cout << sum << endl;
	stack.push(sum + '0');

	x = stack.pop() - '0';
	y = stack.pop();
	z = stack.pop() - '0';
	if (y == '+')
		sum = z + x;
	if (y == '-')
		sum = z - x;
	if (y == '*')
		sum = z * x;
	if (y == '/')
		sum = z / x;
	cout << sum << endl;

	system("pause");
	return 0;
}
