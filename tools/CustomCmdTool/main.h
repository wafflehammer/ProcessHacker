/*
 * Process Hacker -
 *   Console command tool
 *
 * Copyright (C) 2020 dmex
 *
 * This file is part of Process Hacker.
 *
 * Process Hacker is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Process Hacker is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Process Hacker.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MAIN_H
#define _MAIN_H

#include <ph.h>
#include <svcsup.h>

extern PVOID __ImageBase;
extern PPH_STRING CommandType;
extern PPH_STRING CommandObject;
extern PPH_STRING CommandAction;
extern PPH_STRING CommandValue;

NTSTATUS PhCommandModeStart(
    VOID
    );

#endif
