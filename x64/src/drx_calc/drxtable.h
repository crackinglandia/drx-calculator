/*
$Id: drxtable.h 5 2011-11-16 02:45:30Z crackinglandia $

DRx Calculator v1.1

Copyright (C) 2011 +NCR/CRC! [ReVeRsEr] http://crackinglandia.blogspot.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Author: +NCR/CRC! [ReVeRsEr]
Date: September 2011

*/

// DRx table
#define DR0_LOCAL_EXACT_BPM_ENABLED 1
#define DR0_GLOBAL_EXACT_BPM_ENABLED 2

#define DR0_W 0x10000
#define DR0_IO 0x20000
#define DR0_RW 0x30000
#define DR0_EXECUTION 0

#define DR0_LEN1 0
#define DR0_LEN2 0x40000
#define DR0_LEN4 0x0C0000
#define DR0_LENU 0x80000

#define DR1_LOCAL_EXACT_BPM_ENABLED 4
#define DR1_GLOBAL_EXACT_BPM_ENABLED 8

#define DR1_W 0x100000
#define DR1_IO 0x200000
#define DR1_RW 0x300000
#define DR1_EXECUTION 0

#define DR1_LEN1 0
#define DR1_LEN2 0x1000000
#define DR1_LEN4 0x3000000
#define DR1_LENU 0x2000000

#define DR2_LOCAL_EXACT_BPM_ENABLED 0x10
#define DR2_GLOBAL_EXACT_BPM_ENABLED 0x20

#define DR2_W 0x1000000
#define DR2_IO 0x2000000
#define DR2_RW 0x3000000
#define DR2_EXECUTION 0

#define DR2_LEN1 0
#define DR2_LEN2 0x40000000
#define DR2_LEN4 0x0C0000000
#define DR2_LENU 0x80000000

#define DR3_LOCAL_EXACT_BPM_ENABLED 0x40
#define DR3_GLOBAL_EXACT_BPM_ENABLED 0x80

#define DR3_W 0x10000000
#define DR3_IO 0x20000000
#define DR3_RW 0x30000000
#define DR3_EXECUTION 0

#define DR3_LEN1 0
#define DR3_LEN2 0x1000000000
#define DR3_LEN4 0x3000000000
#define DR3_LENU 0x2000000000

// Bits generales
#define LOCAL_EXACT_BPM_ENABLED 0x100
#define GLOBAL_EXACT_BPM_ENABLED 0x200
#define LOCAL_EXACT_BPM_DISABLED 0
#define GLOBAL_EXACT_BPM_DISABLED 0
#define GLOBAL_EXACT_BPM_ENABLED 0x200
#define GENERAL_DETECT_ENABLED 0x2000
#define RESERVED_BIT10 0x400