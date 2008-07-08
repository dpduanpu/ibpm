// Flux.cc
//
// Description:
// Implementation of the Flux class, using Blitz++ arrays
//
// Author(s):
// Clancy Rowley
//
// Date: 4 Jul 2008
//
// $Revision: 24 $
// $LastChangedDate: 2008-07-04 00:50:47 -0400 (Fri, 04 Jul 2008) $
// $LastChangedBy: clancy $
// $HeadURL:// $Header$

#include "Flux.h"
#include "Grid.h"
#include <blitz/array.h>

Flux::Flux(const Grid& grid) {
	_grid = &grid;
	_nx = _grid->getNx();
	_ny = _grid->getNy();
	// allocate memory
	_x.resize(_nx,_ny-1);
	_y.resize(_nx-1,_ny);
}

/// Deallocate memory in the destructor
Flux::~Flux() {
	// deallocate memory
	_x.free();
	_y.free();
}

/// Set *this to the curl of the argument, returning *this.
Flux Flux::curl(const Scalar& f) {
	// WORK HERE
	return *this;
}

/// Set *this to the gradient of the argument, returning *this.
Flux Flux::gradient(const Scalar& f) {
	// WORK HERE
	return *this;
}

/// Return the inner product of *this and the argument
double Flux::dot(const Flux& q) const {
	// WORK HERE
	return 0;
}