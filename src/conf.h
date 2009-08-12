/* vim: set sw=4 sts=4 et foldmethod=syntax : */

/*
 * Copyright (c) 2009 Ali Polatel <polatel@gmail.com>
 *
 * This file is part of the mpdhooker. mpdhooker is free software; you can
 * redistribute it and/or modify it under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation.
 *
 * mpdhooker is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MPDHOOKER_GUARD_CONF_H
#define MPDHOOKER_GUARD_CONF_H 1

#include <stdbool.h>

#include <glib.h>

#include <mpd/client.h>

struct homedir {
    gchar *home;
    gchar *config;
    gchar *pid;
    gchar *bitrate;
    gchar *consume;
    gchar *crossfade;
    gchar *elapsed;
    gchar *playlist;
    gchar *playlist_length;
    gchar *random;
    gchar *repeat;
    gchar *samplerate;
    gchar *single;
    gchar *song;
    gchar *state;
    gchar *updatingdb;
    gchar *volume;
};

struct globalconf {
    /* Command line options */
    int opt_version;
    int opt_kill;
    int opt_no_daemonize;

    /* Configuration options */
    int poll;
    int reconnect;

    /* Other variables */
    const gchar *hostname;
    const gchar *port;
    const gchar *password;
    struct homedir dir;

    struct mpd_connection *conn;
    struct mpd_status *status;
    struct mpd_entity *entity;
} mhconf;

#define ENV_HOME_DIR        "MPD_HOOKER_DIR"
#define ENV_MPD_HOST        "MPD_HOST"
#define ENV_MPD_PORT        "MPD_PORT"
#define ENV_MPD_PASSWORD    "MPD_PASSWORD"

void mhconf_init(void);
void mhconf_free(void);
const gchar *mhconf_pid_file_proc(void);

#endif // MPDHOOKER_GUARD_CONF_H
