#include <iostream>
#include <vector>

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
	void Push_it(T1 it);
private:

};
template<class T1, class T2>
void CExample<T1, T2>::Push_it(T1 it)
{
	aV.push_back(it);
}
void main()
{
	float j = 3.0;
	float k=fExample<float>(j);
	CExample<int, int> clase(1);
	clase.Push_it(3);
	clase.Push_it(4);
}


