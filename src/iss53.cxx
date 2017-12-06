#include <iostream>
int main(void)
{
	std::cout << "你快乐吗? (y/n)";
	char ch;
	std::cin >> ch;
	if ('y'==ch)
	{
		std::cout << "你快乐个屁！"<<std::endl;	
	} else {
		std::cout << "你明显是在骗自己！"<< std::endl;
	}
	while (std::cin.get()!='\n') continue;
	std::cin.clear();
	
	for(int i=0;i<10;++i)
	{
		std::cout << "index="<<i<<std::endl;
	}
	return 0;
}
