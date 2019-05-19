#include "iostream"
#include "typeinfo"
using namespace std;


typedef class _Box{
public:

	_Box(int l, int w, int h)
	{
		this->l = l;
		this->w = w;
		this->h = h;
	}

	int l;
	int w;
	int h;
}Box_c, *Box_p;













int main (int argc, char argv[])
{

	_Box b(2, 3, 4);

	//b.l = b.w = b.h = 1;
	
	cout<<"type = "<<typeid(b).name()<<"  size = "<<sizeof Box_c<<endl;

	cout<<"³¤ "<<b.l<<endl;
	cout<<"¿í "<<b.w<<endl;
	cout<<"¸ã "<<b.h<<endl;

	system("pause");
	return 0;
}