#include "Deserializer.h"

namespace uqac::serializer 
{
	Deserializer::Deserializer(char buffer[], int sizebuffer)
	{
		index = 0;
		//this->buffer = buffer[sizebuffer];
	}

	template<typename T>
	T Deserializer::Read(T& data)
	{
		size_t size = sizeof(data);

		unsigned char buf[size];
		for (size_t i = 0; i < size; i++)
		{	
			buf[i] = buffer[index];
			index += i;
		}
		return (T)buf;
	}
}

