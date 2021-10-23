#include "Vector3.h"
#include "FloatCompressor.h"

namespace uqac::serializer
{
	 Vector3Compressor::Vector3Compressor(Vector3 min, Vector3 max)
	{
		 this->min = min;
		 this->max = max;
	}

	void Vector3Compressor::Compressor(Serializer& s, Vector3 val)
	{
		FloatCompressor floatComp(min.x, max.x, precision);
		floatComp.Compressor(s, val.x);

		FloatCompressor floatComp(min.y, max.y, precision);
		floatComp.Compressor(s, val.y);

		FloatCompressor floatComp(min.z, max.z, precision);
		floatComp.Compressor(s, val.z);
		
	}

	Vector3 Vector3Compressor::UnCompressor(Deserializer& s)
	{
		FloatCompressor floatComp(min.x, max.x, precision);
		floatComp.UnCompressor(s);

		FloatCompressor floatComp(min.y, max.y, precision);
		floatComp.UnCompressor(s);

		FloatCompressor floatComp(min.z, max.z, precision);
		floatComp.UnCompressor(s);
	}

	

	
}