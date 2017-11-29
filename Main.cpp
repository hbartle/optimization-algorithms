/*
 * Main.cpp
 * Copyright (C) 2017 transpalette <transpalette@arch-cactus>
 *
 * Distributed under terms of the MIT license.
 */

#include "Algorithm.h"

int main(int argc, char  **argv) {

	std::cout << "--- Using MNIST dataset ---" << std::endl << std::endl;
	HandWrittenNumbers *hwn = new HandWrittenNumbers(10, 28, 28);
	hwn->loadDirectory("/home/transpalette/Code/Optimization_Project/MNIST");

	std::cout << std::endl << "* Running nearest class centroid..." << std::endl;
	Algorithm algo(hwn);
	algo.nearestClassCentroid();

	return 0;
}



