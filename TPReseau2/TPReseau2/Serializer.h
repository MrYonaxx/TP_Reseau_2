#pragma once
#include <vector>

namespace uqac::serializer 
{
	class Serializer 
	{

	private:
		std::vector<float> position;
		
		int index;

	public:
		Serializer();
		Serializer(int size);

		template <typename T>
		void Serialize(T &data);

	};
}