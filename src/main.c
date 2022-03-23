/* main.c
 *
 * Copyright 2001 John Wiseman G8BPQ
 * Copyright 2022 Gerald Zehetner OE5GZE
 *
 *
 * This file is part of ARDOPC.
 *
 * ARDOPC is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ARDOPC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// WINDOWS
#ifdef WIN32

#include "main_windows.c"

// Linux
#else

#include "main_linux.c"

#endif
