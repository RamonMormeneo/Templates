#include <iostream>
#include <vector>
/*
//EJ 1
template<class T,int aux=1> T fExample(T a) {
	return(a + aux);
}
template<class T1,class T2>
class CExample
{
public:
	std::vector<T1>aV;
	CExample(T1 it)
	{
		aV.push_back(it);
	}
	void Push_it(T2 it);
private:

};
template<class T1, class T2>
void CExample<T1, T2>::Push_it(T2 it)
{
	aV.push_back(it);
}
template<class T3>
struct node
{
	T3 info;
	node* next;
};
void main()
{
	float j = 3.0;
	float k=fExample<float>(j);
	CExample<int, int> clase(1);
	clase.Push_it(3);
	clase.Push_it(4);
	node<int> first;
	first.info = 3;
	first.next = &first;
	node<char> second;
	second.info = 'c';
	second.next = &second;
}*/
/*
//EJ 2

template<class T1> void swapValues(T1 &a, T1 &b) {
	T1 tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void main()
{
	int a = 1;
	int b = 2;
	swapValues(a, b);
	float c = 3.2;
	float d = 4.6;
	swapValues(c, d);
}*/
//EJ 3

template<class T1>
class SuperQueu
{
public:
	struct node
	{
		T1 info;
		node *next;
		node *preavious;
	};
	int tam=0;
	node* first;
	node* last;
	SuperQueu();
	SuperQueu(SuperQueu<T1> &a);
	int size();
	void push(T1 a);
	void pop();


private:

};

template<class T1>
SuperQueu<T1>::SuperQueu()
{
	first = nullptr;
	last = nullptr;
}

template<class T1>
SuperQueu<T1>::SuperQueu(SuperQueu<T1> &a)
{ 
	node *aux = a.last;
	for (int i = a.size(); i > 0; i--)
	{
	
		T1 auxinfo = aux->info;
		push(auxinfo);
		aux = aux->next;
	}
}

template<class T1>
int SuperQueu<T1>::size()
{
	return tam;
}

template<class T1>
void SuperQueu<T1>::push(T1 a)
{
	node *t = new node();
	t->info = a;
	if (tam == 0)
	{
		first = t;
		last = t;

	}
	if (last != nullptr)
	{
		last->preavious = t;
	}
	t->next = last;
	last = t;
	tam++;
}

template<class T1>
void SuperQueu<T1>::pop()
{
	if (tam > 0)
	{
		node *t = first;
		first = t->preavious;
		tam--;
		delete t;
	}
}

void main()
{
	SuperQueu <int> a;
	a.push(3);
	a.push(4);
	a.push(5);
	a.pop();
	int tam = a.size();
	SuperQueu <int> b(a);
}