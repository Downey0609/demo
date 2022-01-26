#include <stdio.h>

void Solve_acc(short *acc, float *a_x, float *a_y, float *a_z)

{

	*a_x = ((short)((acc[4] << 8) | acc[3])) / 32768.0 * 8 * 9.8;

	*a_y = ((short)((acc[6] << 8) | acc[5])) / 32768.0 * 8 * 9.8;

	*a_z = ((short)((acc[8] << 8) | acc[7])) / 32768.0 * 8 * 9.8;

}

