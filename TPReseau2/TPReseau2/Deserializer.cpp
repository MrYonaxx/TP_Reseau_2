#include "Deserializer.h"

namespace uqac::serializer 
{
	Deserializer::Deserializer(char buffer[], int sizebuffer)
	{
		index = 0;
	}

	Deserializer::Deserializer(std::vector<char> buffer, int sizebuffer)
	{
		index = 0;	
		this->buffer = buffer;

		std::cout << this->buffer[0];
		/*for (size_t i = 0; i < sizebuffer; i++)
		{
			this->buffer[i] = buffer[i];
		}*/
	}

}

