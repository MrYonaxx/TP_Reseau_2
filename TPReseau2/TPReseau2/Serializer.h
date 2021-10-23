#pragma once
#include <iostream>
#include <vector>
#include <string>

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

		template <typename T,
			std::enable_if_t<std::is_arithmetic_v<
			std::remove_reference_t<T>>>* = nullptr>
		void Serialize(T& data);

		std::vector<char> GetBuffer();
		int GetBufferSize();

	private:
		void Write(char* buff, size_t size);

	};

	template <typename T,
		std::enable_if_t<std::is_arithmetic_v<
		std::remove_reference_t<T>>>* = nullptr>
	inline void Serializer::Serialize(T& data)
	{
		//size_t size = sizeof(data);

		Write(reinterpret_cast<char*>(data), sizeof(data));
	}


}