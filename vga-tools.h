/*
 * Copyright (C) 2016, CompuLab ltd.
 * Author: Andrey Gelman <andrey.gelman@compulab.co.il>
 * License: GNU GPLv2 or later, at your option
 */

#ifndef _PCI_TOOLS_H
#define _PCI_TOOLS_H

extern int (*GPU_get_temperature)(int *temp);


char *vga_driver_name_list(void);
void gpu_sensors_init(void);

#endif	/* _PCI_TOOLS_H */

