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

#include DEFAULTCONFIG

#include "dmr.h"

char *dmr_get_readable_call_type(dmr_call_type_t call_type) {
	switch (call_type) {
		case DMR_CALL_TYPE_PRIVATE: return "private";
		case DMR_CALL_TYPE_GROUP: return "group";
		default: return "unknown";
	}
}

char *dmr_get_readable_data_type(dmr_data_type_t data_type) {
	switch (data_type) {
		case DMR_DATA_TYPE_NORMAL_SMS: return "normal sms";
		case DMR_DATA_TYPE_MOTOROLA_TMS_SMS: return "motorola tms sms";
		case DMR_DATA_TYPE_GPS_POSITION: return "gps position";
		default: return "unknown";
	}
}
