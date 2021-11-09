# include <iostream>
# include <time.h>

class Base
{
	public:
		virtual	~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};


Base::~Base()
{
}

Base	*generate(void)
{
	std::srand(time(NULL));
	int type = rand() % 3;
	switch (type)
	{
		case 0:
			return new A;
			break;
		case 1:
			return new B;
			break;
		case 2:
			return new C;
			break;
		default:
			return NULL;
			break;
	}
}

void	identify(Base *p)
{
	if (p != NULL)
	{
		if (dynamic_cast<A*>(p) != NULL)
		{
			std::cout << "A" << std::endl;
			return ;
		}
		if (dynamic_cast<B*>(p) != NULL)
		{
			std::cout << "B" << std::endl;
			return ;
		}
		if (dynamic_cast<C*>(p) != NULL)
		{
			std::cout << "C" << std::endl;
			return ;
		}
	}
	else
	{
		std::cout << "NULL" << std::endl;
		return ;
	}
	
}

void	identify(Base &p)
{	
	try
	{
		Base *bb = dynamic_cast<Base *>(&p);
		if (bb == NULL)
		{
			std::cout << "NULL" << std::endl;
			return;
		}
	}
	catch(const std::exception& e)
	{}
	try
	{
		A& v = dynamic_cast<A&>(p);
		(void)v;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
	try
	{
		B& v = dynamic_cast<B&>(p);
		(void)v;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
	try
	{
		C& v = dynamic_cast<C&>(p);
		(void)v;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
}

int	main()
{
	Base *bb = generate();
	identify(bb);
	identify(*bb);
	delete bb;
}
