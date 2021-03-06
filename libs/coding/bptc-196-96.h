/*
 * This file is part of dmrshark.
 *
 * dmrshark is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * dmrshark is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with dmrshark.  If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef BPTC_196_96_H_
#define BPTC_196_96_H_

#include <libs/base/types.h>
#include <libs/dmrpacket/dmrpacket-types.h>

typedef struct {
	flag_t bits[96];
} bptc_196_96_data_bits_t;

flag_t bptc_196_96_check_and_repair(flag_t deinterleaved_bits[196]);
bptc_196_96_data_bits_t *bptc_196_96_extractdata(flag_t deinterleaved_bits[196]);

dmrpacket_payload_info_bits_t *bptc_196_96_generate(bptc_196_96_data_bits_t *data_bits);

#endif
