#ifndef TARGET_H_SENTRY
#define TARGET_H_SENTRY

#include "coordinate.h"

#define TRUE	1
#define FALSE	0

int
is_contact_with_target(const struct coordinate c,
					struct coordinate_list *target);

#endif