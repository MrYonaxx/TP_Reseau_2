#include "FloatCompressor.h"
#include "IntCompressor.h"

namespace uqac::serializer
{
	FloatCompressor::FloatCompressor(int min, int max, int precision)
	{
		this->precision = precision;
		int min = (int)min * pow(10, precision);
		int max = (int)max * pow(10, precision);
		this->intComp = IntCompressor(min, max);
	}

	void FloatCompressor::Compressor(Serializer& s, float val)
	{
		int valInt = (int)val * pow(10, precision); 

		intComp.Compressor(s, valInt);
	}

	float FloatCompressor::UnCompressor(Deserializer& s)
	{
		return intComp.UnCompressor(s) / (pow(10, precision));
	}
}