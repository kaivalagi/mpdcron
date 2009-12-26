/* vim: set cino= fo=croql sw=8 ts=8 sts=0 noet ai cin fdm=syntax : */

/*
 * Copyright (c) 2009 Ali Polatel <alip@exherbo.org>
 *
 * This file is part of the mpdcron mpd client. mpdcron is free software;
 * you can redistribute it and/or modify it under the terms of the GNU General
 * Public License version 2, as published by the Free Software Foundation.
 *
 * mpdcron is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MPDCRON_GUARD_STATS_DEFS_H
#define MPDCRON_GUARD_STATS_DEFS_H 1

#define MPDCRON_MODULE		"stats"
#include "../gmodule.h"

#include <stdbool.h>

#include <glib.h>
#include <mpd/client.h>

extern char *dbpath;

bool db_init(const char *path);
bool db_process(const char *path, const struct mpd_song *song, bool increment);
bool db_love_artist(const char *path, const struct mpd_song *song, bool love, bool wantcount);
bool db_love_artist_expr(const char *path, const char *expr, bool love, bool wantcount);
bool db_love_album(const char *path, const struct mpd_song *song, bool love, bool wantcount);
bool db_love_album_expr(const char *path, const char *expr, bool love, bool wantcount);
bool db_love_genre(const char *path, const struct mpd_song *song, bool love, bool wantcount);
bool db_love_genre_expr(const char *path, const char *expr, bool love, bool wantcount);
bool db_love_song(const char *path, const struct mpd_song *song, bool love, bool wantcount);
bool db_love_song_expr(const char *path, const char *expr, bool love, bool wantcount);
bool db_kill_artist(const char *path, const struct mpd_song *song, bool kkill);
bool db_kill_artist_expr(const char *path, const char *expr, bool kkill, bool wantcount);
bool db_kill_album(const char *path, const struct mpd_song *song, bool kkill);
bool db_kill_album_expr(const char *path, const char *expr, bool kkill, bool wantcount);
bool db_kill_genre(const char *path, const struct mpd_song *song, bool kkill);
bool db_kill_genre_expr(const char *path, const char *expr, bool kkill, bool wantcount);
bool db_kill_song(const char *path, const struct mpd_song *song, bool kkill);
bool db_kill_song_expr(const char *path, const char *expr, bool kkill, bool wantcount);
bool db_rate_artist(const char *path, const struct mpd_song *song, long rating, bool add, bool wantcount);
bool db_rate_artist_expr(const char *path, const char *expr, long rating, bool add, bool wantcount);
bool db_rate_album(const char *path, const struct mpd_song *song, long rating, bool add, bool wantcount);
bool db_rate_album_expr(const char *path, const char *expr, long rating, bool add, bool wantcount);
bool db_rate_genre(const char *path, const struct mpd_song *song, long rating, bool add, bool wantcount);
bool db_rate_genre_expr(const char *path, const char *expr, long rating, bool add, bool wantcount);
bool db_rate_song(const char *path, const struct mpd_song *song, long rating, bool add, bool wantcount);
bool db_rate_song_expr(const char *path, const char *expr, long rating, bool add, bool wantcount);

int file_load(const struct mpdcron_config *conf, GKeyFile *fd);
void file_cleanup(void);

#endif /* !MPDCRON_GUARD_STATS_DEFS_H */