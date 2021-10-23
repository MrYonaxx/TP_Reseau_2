#pragma once

#include "Serializer.h"
#include "Deserializer.h"
#include "Quaternion.h"

namespace uqac::serializer {

	class QuaternionCompressor {

	public:

		QuaternionCompressor() = default;

		void Compressor(Serializer& s, Quaternion quaternion);
		Quaternion UnCompressor(Deserializer& s);
	};
}