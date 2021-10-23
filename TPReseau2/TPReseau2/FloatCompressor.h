#pragma once

#include "Serializer.h"

namespace uqac::serializer {

	class FloatCompressor {

	private:
		int min;
		int max;
		int maxRange;
		int precision;

	public:

		FloatCompressor(int min, int max);

		void Compressor(Serializer s, float val);
		float UnCompressor(int val);
	};
}