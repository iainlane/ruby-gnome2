/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2011  Ruby-GNOME2 Project Team
 *  Copyright (C) 2002,2003 Ruby-GNOME2 Project Team
 *  Copyright (C) 1998-2000 Yukihiro Matsumoto,
 *                          Daisuke Kanda,
 *                          Hiroshi Igarashi
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#include "global.h"

#define RG_TARGET_NAMESPACE cHandleBox

static VALUE
hb_initialize(VALUE self)
{
    RBGTK_INITIALIZE(self, gtk_handle_box_new());
    return Qnil;
}

void 
Init_gtk_handle_box(void)
{
    VALUE RG_TARGET_NAMESPACE = G_DEF_CLASS(GTK_TYPE_HANDLE_BOX, "HandleBox", mGtk);

    rb_define_method(RG_TARGET_NAMESPACE, "initialize", hb_initialize, 0);
    rb_undef_method(RG_TARGET_NAMESPACE, "shadow");
    rb_undef_method(RG_TARGET_NAMESPACE, "shadow=");
    rb_undef_method(RG_TARGET_NAMESPACE, "set_shadow");
}
