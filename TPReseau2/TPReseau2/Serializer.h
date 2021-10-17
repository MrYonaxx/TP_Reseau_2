#pragma once

namespace uqac::serializer 
{
	class Serializer 
	{

	private:
		//std::vector<>
		int index;

	public:
		Serializer();
		Serializer(int size);

		template <typename T>
		void Serialize(T &data);

	};
}