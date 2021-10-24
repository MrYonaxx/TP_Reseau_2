#include "QuaternionCompressor.h"

namespace uqac::serializer
{
	QuaternionCompressor::QuaternionCompressor() {
		this->vectComp = Vector3Compressor(Vector3(-1, -1, -1),Vector3(1, 1, 1), 3);
	}

	void QuaternionCompressor::Compressor(Serializer& s, Quaternion quaternion) {
		vectComp.Compressor(s, Vector3(quaternion.x, quaternion.y, quaternion.z));
	}

	Quaternion QuaternionCompressor::UnCompressor(Deserializer& s) {
		Vector3 vector = vectComp.UnCompressor(s);
		std::cout << vector.x,"\n";
		std::cout << vector.y,"\n";
		std::cout << vector.z,"\n";
		std::cout << sqrt(1 - (pow(vector.x, 2) - pow(vector.y, 2) - pow(vector.z, 2)));
		return Quaternion(vector.x, vector.y, vector.z, sqrt(1 - (pow(vector.x, 2) - pow(vector.y, 2) - pow(vector.z, 2))));
	}
}