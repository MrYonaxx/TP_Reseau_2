#pragma once

#include "Serializer.h"
#include "Deserializer.h"
#include "Vector3.h"
#include "Quaternion.h"

namespace uqac::serializer {

	class QuaternionCompressor {

	private:
		Vector3Compressor vectComp;

	public:

		QuaternionCompressor();

		void Compressor(Serializer& s, Quaternion quaternion);
		Quaternion UnCompressor(Deserializer& s);
	};
}