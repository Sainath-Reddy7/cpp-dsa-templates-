#ifndef STACK_H
#define STACK_H


template<class T>
class Stack{
	private:
	
	struct Node
	{
		T data;
		Node *next;
		Node(T data, Node *next)
		{
			this->data = data;
			this->next = next;
		}
	};
	Node *top;
	int n;
	
	public:
	Stack();
	void push(T data);
	bool pop(T &out);
	bool isEmpty();
	int size();
	
	~Stack();
};

template<class T>
Stack<T>::Stack()
{
	top = nullptr;
	n = 0;
}

template<class T>
void Stack<T>::push(T data)
{
  top = new Node(data, top);
  n = n + 1;
}


template<class T>
bool Stack<T>::pop(T &data)
{
	if (top == nullptr)
	{
		return false;
	}
	else
	{
		Node *temp;
		temp = top;
		data = top->data;
		top = top->next;
		n = n-1;
		
		delete temp;
		return true;
	}
}


template<class T>
bool Stack<T>::isEmpty()
{
	return top == nullptr;
}

template<class T>
int Stack<T>::size()
{
	return n;
}


template<class T>
Stack<T>::~Stack()
{
	Node *temp;
	Node *node_deleted;
	for (temp=top; temp != nullptr;)
	{
		node_deleted = temp;
		temp = temp->next;
		delete node_deleted;
	}
}
#endif
