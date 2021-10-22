#include "Serializer.h"
#include <iostream>

namespace uqac::serializer 
{
	Serializer::Serializer()
	{
		buffer.reserve(0);
	}

	Serializer::Serializer(int size)
	{
		buffer.reserve(size);
		index = 0;
	}

	template<typename T>
	void Serializer::Serialize(T& data)
	{
		size_t size = sizeof(data);
		Write((char*)data, size)
	}

	void Serializer::Write(const char* buff, size_t size)
	{
		// On resize le buffe si pas assez grand
		if (index + size > buffer.size())
			buffer.resize(index + size);

		std::memcpy(&buffer[index], buff, size);
		index += size;
	}
}


