#include "iostream"
#include "typeinfo"


using namespace std;





int main(int argc, char* argv[])
{

	//auto 存储类
	{
		auto a = 3.1416;
		cout<<"size = "<<sizeof a<<", type = "<<typeid(a).name()<<endl;
	}
	
	{
		auto a = 2;
		cout<<"size = "<<sizeof a<<", type = "<<typeid(a).name()<<endl;
	}

	{
		auto a = 'a';
		cout<<"size = "<<sizeof a<<", type = "<<typeid(a).name()<<endl;
	}

	//register 寄存器 不能取地址(待商榷)
	{
		register int a = 'a';
		cout<<"size = "<<sizeof a<<", type = "<<typeid(a).name()<<endl;
		cout<<&a<<endl;
	}


	system("pause");
	return 0;
}