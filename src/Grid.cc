// Grid.cc
//
// Description:
// Implementation of the Grid class
//
// Author(s):
// Clancy Rowley
//
// Date: 3 Jul 2008
//
// $Revision: 17 $
// $LastChangedDate: 2008-07-03 01:55:25 -0400 (Thu, 03 Jul 2008) $
// $LastChangedBy: clancy $
// $HeadURL:// $Header$

#include "Grid.h"

//#include <assert.h>
#define assert( condition ) { 		\
	if ( !(condition) ) throw -1;	\
} 

/// Return the x-coordinate of the center of cell i  (i in 0..m-1)
double Grid::getXCenter(int i) {
	assert(i >= 0);
	assert(i < _nx);
	return _xOffset + (i+0.5) * _dx;
}

/// Return the y-coordinate of the center of cell j  (j in 0..n-1)
double Grid::getYCenter(int j) {
	assert(j >= 0);
	assert(j < _ny);
	return _yOffset + (j+0.5) * _dx;
}

/// Return the x-coordinate of the left edge of cell i  (i in 0..m)
double Grid::getXEdge(int i) {
	assert(i >= 0);
	assert(i <= _nx);
	return _xOffset + i * _dx;
}

/// Return the y-coordinate of the bottom edge of cell j  (j in 0..n)
double Grid::getYEdge(int j) {
	assert(j >= 0);
	assert(j <= _ny);
	return _yOffset + j * _dx;
}
