#pragma once
#include <iostream>

template <typename T>
class Node {
public:
	Node(T i = 0, Node * n = NULL) {
		info = i;
		next = n;
	}

	T info;
	Node * next;
};