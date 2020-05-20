// Copyright (C) 2016-2020 Yixuan Qiu <yixuan.qiu@cos.name>
//
// This Source Code Form is subject to the terms of the Mozilla
// Public License v. 2.0. If a copy of the MPL was not distributed
// with this file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef GEIGS_MODE_H
#define GEIGS_MODE_H

namespace Spectra {

///
/// \ingroup Enumerations
///
/// The enumeration to specify the mode of generalized eigenvalue solver.
///
enum class GeigsMode
{
    Cholesky,        ///< Using Cholesky decomposition to solve generalized eigenvalues.
    RegularInverse,  ///< Regular inverse mode for generalized eigenvalue solver.
    ShiftInvert,     ///< Shift-and-invert mode for generalized eigenvalue solver.
    Buckling,        ///< Buckling mode for generalized eigenvalue solver.
    Cayley           ///< Cayley transformation mode for generalized eigenvalue solver.
};

}  // namespace Spectra

#endif  // GEIGS_MODE_H
