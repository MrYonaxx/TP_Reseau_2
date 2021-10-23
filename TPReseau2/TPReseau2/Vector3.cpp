#include "Vector3.h"
#include "FloatCompressor.h"

namespace uqac::serializer
{

	void Vector3::Compressor(Serializer s, Vector3 val)
	{
		FloatCompressor floatComp(min,max);

		floatComp.Compressor(s, val.x);
		floatComp.Compressor(s, val.y);
		floatComp.Compressor(s, val.z);
		
	}

	Vector3 Vector3::UnCompressor(Vector3 val)
	{
		FloatCompressor floatComp(min, max);

		floatComp.UnCompressor(s, val.x);
		floatComp.UnCompressor(s, val.y);
		floatComp.UnCompressor(s, val.z);

	}

	
}