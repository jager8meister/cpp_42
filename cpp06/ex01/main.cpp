#include <stdint.h>
#include <iostream>

class Data
{
	private:
		int	v;
	public:
		Data();
		Data	&operator=(const Data &obj);
		Data(const Data &obj);
		~Data();

		int		getV();
		void	setV(int v);
};

Data::Data()
{
	this->v = 5;
}

void	Data::setV(int v)
{
	this->v = v;
}

int	Data::getV()
{
	return this->v;
}

Data	&Data::operator=(const Data &obj)
{
	this->v = obj.v;
	return *this;
}

Data::Data(const Data &obj)
{
	this->v = obj.v;
}

Data::~Data()
{}

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	tmp_ptr;
	tmp_ptr = reinterpret_cast<uintptr_t>(ptr);
	return tmp_ptr;
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ptr;
	ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

int	main()
{
	Data		data_obj;
	Data		*data_ptr;
	uintptr_t	uint_ptr;
	data_obj.setV(56);
	std::cout << data_obj.getV() << std::endl;
	uint_ptr = serialize(&data_obj);
	data_ptr = deserialize(uint_ptr);
	std::cout << "data_ptr : " << data_ptr->getV() << std::endl;
	std::cout << "data_obj : " << data_obj.getV() << std::endl;
	std::cout << "data_ptr : " << data_ptr << std::endl;
	std::cout << "data_obj : " << &data_obj << std::endl;
	return 0;
}
