#include "FloatCompressor.h"
#include "IntCompressor.h"

namespace uqac::serializer
{

	void FloatCompressor::Compressor(Serializer s, float val)
	{
		int valInt = (int)val * pow(10, precision);
		min = (int)min * pow(10, precision);
		max = (int)max * pow(10, precision);

		IntCompressor intComp(min, max);
		intComp.Compressor(s, valInt);
	}

	float FloatCompressor::UnCompressor(int val)
	{
		//maxRange = max - min;
		return val / (pow(10, precision));
	}
}