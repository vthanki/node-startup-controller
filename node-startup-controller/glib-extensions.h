/* vi:set et ai sw=2 sts=2 ts=2: */
/* SPDX license identifier: MPL-2.0
 *
 * Copyright (C) 2012, GENIVI
 *
 * This file is part of node-startup-controller.
 *
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License (MPL), v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * For further information see http://www.genivi.org/.
 *
 * List of changes:
 * 2015-04-30, Jonathan Maw, List of changes started
 *
 */

#ifndef __GLIB_EXTENSIONS_H__
#define __GLIB_EXTENSIONS_H__

#include <glib.h>

G_BEGIN_DECLS

GVariant *g_variant_lookup_value_with_int_key (GVariant           *dictionary,
                                               const gint          key,
                                               const GVariantType *expected_type);
gboolean  g_variant_string_array_has_string   (GVariant           *array,
                                               const gchar        *str);
gint      g_int_pointer_compare               (gconstpointer       a,
                                               gconstpointer       b);

G_END_DECLS

#endif /* !__GLIB_EXTENSION_H__ */
