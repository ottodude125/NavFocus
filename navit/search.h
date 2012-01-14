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

#ifndef NAVIT_SEARCH_H
#define NAVIT_SEARCH_H

#ifdef __cplusplus
extern "C" {
#endif


typedef struct search_list_result {
	int id;
	struct pcoord *c;
	struct search_list_country *country;
	struct search_list_town *town;
	struct search_list_street *street;
	struct search_list_house_number *house_number;
}search_list_result;

struct search_list_level {
	struct mapset *ms;
	struct search_list_common *parent;
	struct attr *attr;
	int partial;
	int selected;
	struct mapset_search *search;
	GHashTable *hash;
	GList *list,*curr,*last;
};
struct interpolation {
	int side, mode, rev;
	char *first, *last, *curr;
};


typedef struct search_list {
	struct mapset *ms;
	struct item *item;
	int level;
	struct search_list_level levels[4];
	struct search_list_result result;
	struct search_list_result last_result;
	int last_result_valid;
	char *postal;
	struct interpolation inter;
}search_list;

struct search_list_common {
	void *parent;
	struct item unique,item;
	int selected;
	struct pcoord *c;
	char *town_name;
	char *district_name;
	char *postal;
	char *postal_mask;
	char *county_name;
};

struct search_list_country {
	struct search_list_common common;
	char *car;
	char *iso2;
	char *iso3;
	char *name;
	char *flag;
};

struct search_list_town {
	struct search_list_common common;
	struct item itemt;
	char *county;
};

struct search_list_street {
	struct search_list_common common;
	char *name;
};

struct search_list_house_number {
	struct search_list_common common;
	char *house_number;
	int interpolation;
};


/* prototypes */
struct attr;
struct mapset;
struct search_list;
struct search_list_result;
struct jni_object;
struct search_list *search_list_new(struct mapset *ms);
void search_list_search(struct search_list *this_, struct attr *search_attr, int partial);
char *search_postal_merge(char *mask, char *new_);
char *search_postal_merge_replace(char *mask, char *new_);
struct search_list_common *search_list_select(struct search_list *this_, enum attr_type attr_type, int id, int mode);
struct search_list_result *search_list_get_result(struct search_list *this_);
void search_list_destroy(struct search_list *this_);
void search_init(void);
GList * search_by_address(struct search_list *this_, const char *addr, int partial, struct jni_object *jni);
/* end of prototypes */
#ifdef __cplusplus
}
#endif

#endif

