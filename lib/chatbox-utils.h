/*
 * chatbox-utils.h
 *
 * This is a small helper module to copy a file URI into the clipboard, since
 * Gtk.Clipboard.set_with_data is not exposed to GObject-Introspection.
 * It is also a helper that launches an application, from a specified .desktop file.
 *
 */

#ifndef _CHATBOX_UTILS_H
#define _CHATBOX_UTILS_H

#include <gtk/gtk.h>

void chatbox_utils_copy_file_to_clipboard (GtkWidget *widget, GFile *file);
void chatbox_utils_launch_application (char *path);

#endif
