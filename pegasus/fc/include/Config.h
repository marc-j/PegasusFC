/**
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Author: Marc Jacquier <marc@inodrone.com>
 *  Project: InoDronePegasus
 */

#ifndef FC_CONFIG_H_
#define FC_CONFIG_H_

#include <stdint.h>
#include "fc/include/Defs.h"
#include "fc/include/ConfigDefault.h"

struct PIDConfig_t {
        float kP;
        float kI;
        float kD;
};

struct Config_t {
        /* CONFIG VERSION */
        uint8_t version;

        /* FRAME TYPE*/
        uint8_t frameType;

        /* LEVEL ATTITUDE PID */
        PIDConfig_t lvlRollPID;
        PIDConfig_t lvlPitchPID;
        PIDConfig_t lvlYawPID;

        /* GYRO RATE PID */
        PIDConfig_t rateRollPID;
        PIDConfig_t ratePitchPID;
        PIDConfig_t rateYawPID;
};

uint16_t loadDefaultConfig(Config_t* p);
extern Config_t p;

#endif /* CONFIG_H_ */
