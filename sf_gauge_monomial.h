/***********************************************************************
 * $Id: sf_gauge_monomial.h,v 1.2 2009/03/27  
 *
 * Jenifer Gonzalez Lopez
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
#ifndef _SFGAUGE_MONOMIAL_H
#define _SFGAUGE_MONOMIAL_H

#include "hamiltonian_field.h"

void sf_gauge_derivative(const int id, hamiltonian_field_t * const hf);
void sf_gauge_heatbath(const int id, hamiltonian_field_t * const hf);
double sf_gauge_acc(const int id, hamiltonian_field_t * const hf);

#endif
