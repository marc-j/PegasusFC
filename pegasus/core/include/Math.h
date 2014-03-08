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

#ifndef MATH_H_
#define MATH_H_


class Math {

    public:
        static uint16_t constrain(uint16_t value, uint16_t min, uint16_t max) {
            if (value > max) {
                return max;
            } else if (value < min) {
                return min;
            }

            return value;
        }

        static int16_t constrain(int16_t value, int16_t min, int16_t max) {
            if (value > max) {
                return max;
            } else if (value < min) {
                return min;
            }

            return value;
        }

        static float constrain(float value, float min, float max) {
            if (value > max) {
                return max;
            } else if (value < min) {
                return min;
            }

            return value;
        }
};


#endif /* MATH_H_ */
