#pragma once
#include <iostream>
#include <vector>

namespace uqac::serializer
{
	class Deserializer
	{

	private:
		int index;
		std::vector<char> buffer;

	public:

		Deserializer(char buffer[], int size);
		Deserializer(std::vector<char> buffer, int sizebuffer);

		template <typename T>
		T Read(T& data);

	};

	template<typename T>
	inline T Deserializer::Read(T& data)
	{
		const size_t size = sizeof(data);

		unsigned char buf[size];
		std::memcpy(buf, buffer.data() + index, size);
		index += size;

		return (T)*buf;
	}

}
