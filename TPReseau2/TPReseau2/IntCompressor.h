#pragma once

#include "Serializer.h"

namespace uqac::serializer
{
	class IntCompressor
	{

	private:

		int min;
		int max;
		int maxRange;

	public:

		void Compressor(Serializer s, int val);
		int UnCompressor(int val);
		


	};
}