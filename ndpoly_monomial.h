/***********************************************************************
 * $Id$
 * 
 * Copyright (C) 2008 Carsten Urbach
 *
 * This file is part of tmLQCD.
 *
 * tmLQCD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * tmLQCD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with tmLQCD.  If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************/
#ifndef _NDPOLY_MONOMIAL_H
#define _NDPOLY_MONOMIAL_H

#include "hamiltonian_field.h"

void ndpoly_derivative(const int id, hamiltonian_field_t * const hf);
double ndpoly_acc(const int id, hamiltonian_field_t * const hf);
void ndpoly_heatbath(const int id, hamiltonian_field_t * const hf);

#endif
