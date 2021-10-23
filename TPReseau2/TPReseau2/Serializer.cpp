#include "Serializer.h"
#include <iostream>
#include <cstring>

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




	std::vector<char> Serializer::GetBuffer()
	{
		return buffer;
	}

	int Serializer::GetBufferSize()
	{
		return buffer.size();
	}


	void Serializer::Write(const char* buff, size_t size)
	{
		std::cout << '\n';
		std::cout << size;
		std::cout << '\n';


		// On resize le buffe si pas assez grand
		if (index + size > buffer.size())
			buffer.resize(index + size);

		std::memcpy(buffer.data() + index, &buff, size);
		index += size;






		//std::cout << '\n';
		//std::cout << (uint16_t) buffer.data();
		//std::cout << '\n';
		//std::cout << "Size : " << buffer.size();

		//unsigned char buf[2];
		//std::memcpy(buf, buffer.data(), size);
		/*for (size_t i = 0; i < size; ++i)
		{
			buf[i] = buffer[i];
		}*/

		//std::cout << '\n';
		//std::cout << (uint16_t) *buf;
		std::cout << '\n';
	}
}


