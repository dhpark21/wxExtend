/*
    Copyright 2016 Amebis

    This file is part of wxExtend.

    wxExtend is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    wxExtend is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with wxExtend. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Since including <wx/app.h> introduces wrong include order in 3.0.2,
// include the grand <wx/wx.h> at a cost of longer pre-compilation phase.
#include <wx/wx.h>

#include "../include/wxex/appbar.h"
#include "../include/wxex/appex.h"

#include "../include/wxex/common.h"
