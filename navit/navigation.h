/**
 * Navit, a modular navigation system.
 * Copyright (C) 2005-2008 Navit Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#ifndef NAVIT_NAVIGATION_H
#define NAVIT_NAVIGATION_H

#define FEET_PER_METER 3.2808399
#define FEET_PER_MILE  5280

#ifdef __cplusplus
extern "C" {
#endif
#include "item.h"
/* prototypes */
enum attr_type;
enum item_type;
struct attr;
struct attr_iter;
struct callback;
struct map;
struct navigation;
struct route;

/**
 * @brief Holds a way that one could possibly drive from a navigation item
 */
typedef struct navigation_way {
	struct navigation_way *next;		/**< Pointer to a linked-list of all navigation_ways from this navigation item */
	short dir;			/**< The direction -1 or 1 of the way */
	short angle2;			/**< The angle one has to steer to drive from the old item to this street */
	int flags;			/**< The flags of the way */
	struct item item;		/**< The item of the way */
	char *name1;
	char *name2;
}navigation_way;


typedef struct navigation_command {
	struct navigation_itm *itm;
	struct navigation_command *next;
	struct navigation_command *prev;
	int delta;
	int roundabout_delta;
	int length;
}navigation_command;

#include "coord.h"
typedef struct navigation_itm {
	struct navigation_way way;
	int angle_end;
	struct coord start,end;
	int time;
	int length;
	int speed;
	int dest_time;
	int dest_length;
	int told;							/**< Indicates if this item's announcement has been told earlier and should not be told again*/
	int streetname_told;				/**< Indicates if this item's streetname has been told in speech navigation*/
	int dest_count;
	struct navigation_itm *next;
	struct navigation_itm *prev;
}navigation_itm;

int navigation_get_attr(struct navigation *this_, enum attr_type type, struct attr *attr, struct attr_iter *iter);
int navigation_set_attr(struct navigation *this_, struct attr *attr);
struct navigation *navigation_new(struct attr *parent, struct attr **attrs);
int navigation_set_announce(struct navigation *this_, enum item_type type, int *level);
void navigation_destroy(struct navigation *this_);
int navigation_register_callback(struct navigation *this_, enum attr_type type, struct callback *cb);
void navigation_unregister_callback(struct navigation *this_, enum attr_type type, struct callback *cb);
struct map *navigation_get_map(struct navigation *this_);
void navigation_set_route(struct navigation *this_, struct route *route);
void navigation_init(void);
/* end of prototypes */
#ifdef __cplusplus
}
#endif

#endif
