﻿# CMakeList.txt : projet CMake pour TPReseau2, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Ajoutez une source à l'exécutable de ce projet.
add_executable (TPReseau2 "TPReseau2.cpp" "TPReseau2.h" "Serializer.h" "Serializer.cpp" "Deserializer.h" "Deserializer.cpp" "Player.h" "Player.cpp" "Vector3.h" "Quaternion.h" "IntCompressor.cpp" "IntCompressor.h" "FloatCompressor.cpp" "FloatCompressor.h" "Vector3.h" "Vector3.cpp" "QuaternionCompressor.h" "QuaternionCompressor.cpp" )

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
