/*
 * chatbox-launch.c
 *
 */

#include "chatbox-launch.h"
#include <gtk/gtk.h>

static void
launch_application(void)
{
  GAppInfo *appinfo;
  GError *error;
  const gchar *path;

  path = "/usr/share/applications/chromium-browser.desktop";
  appinfo = (GAppInfo*)g_desktop_app_info_new_from_filename(path);
  if (appinfo == NULL)
    g_warning("Error getting appinfo");
  g_app_info_launch (appinfo, NULL, NULL, &error);

  if (error != NULL)
  {
    g_warning ("Error launching: %s", error->message);
    g_error_free (error);
  }
}

