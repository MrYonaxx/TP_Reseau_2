#pragma once
#include <iostream>
#include <vector>

namespace uqac::serializer 
{
	class Serializer 
	{

	private:
		int index;
		std::vector<char> buffer;

	public:
		Serializer();
		Serializer(int size);

		template <typename T>
		void Serialize(T &data);

	private:
		void Write(const char* buff, size_t size);

	};

}