#pragma once
#include <iostream>
#include <vector>

namespace uqac::serializer
{
	class Deserializer
	{

	private:
		int index;
		char buffer[];

	public:

		Deserializer(char buffer[], int size);

		template <typename T>
		T Read(T& data);

	};

}