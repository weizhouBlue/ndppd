// This file is part of ndppd.
//
// Copyright (C) 2011-2019  Daniel Adolfsson <daniel@ashen.se>
//
// ndppd is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// ndppd is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with ndppd.  If not, see <https://www.gnu.org/licenses/>.
#ifndef NDPPD_ALLOC_H
#define NDPPD_ALLOC_H

void *nd_alloc(size_t size);
char *nd_strdup(const char *str);
void nd_alloc_cleanup();

#define ND_ALLOC(type) (type *)nd_alloc(sizeof(type))

#endif // NDPPD_ALLOC_H
