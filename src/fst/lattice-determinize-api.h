#ifndef __LATTICE_DETERMINIZE_API_H__
#define __LATTICE_DETERMINIZE_API_H__

#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include "fst/lattice-fst.h"

//const float kDelta = 1.0/1024;

struct DeterminizeLatticeOptions
{
	float _delta; // A small offset used to measure equality of weights.
	int _max_mem; // If >0, determinization will fail and return false
	              // when the algorithm's (approximate) memory consumption crosses this threshold.
	int _max_loop; // If >0, can be used to detect non-determinizable input
	               // (a case that wouldn't be caught by max_mem).

	DeterminizeLatticeOptions():_delta(kDelta), _max_mem(-1), _max_loop(-1) { }
};

bool DeterminizeLatticeWrapper(Lattice *ifst,double beam, Lattice*ofst,
		DeterminizeLatticeOptions opts);

#include "fst/lattice-determinize.h"

#endif
