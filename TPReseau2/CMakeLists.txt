﻿# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)

project ("TPReseau2")

# Incluez les sous-projets.
add_subdirectory ("TPReseau2")
